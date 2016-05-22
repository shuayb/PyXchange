/**
 * @brief This module implements simulator of exchange
 * @file OrderBook.hpp
 *
 */

#ifndef ORDER_BOOK
#define ORDER_BOOK

#include "orderbook/OrderContainer.hpp"
#include "PyXchangeFwd.hpp"



namespace pyxchange
{


class OrderBook
{
public:
                                            OrderBook();

     void                                   createOrder( const TraderPtr& trader,
                                                         const boost::python::dict& decoded );

private:
    template<typename T>
    void                                    createOrder( T& orders,
                                                         const TraderPtr& trader,
                                                         const OrderPtr& order );

    BidOrderContainer                       bidOrders;
    AskOrderContainer                       askOrders;

};


} /* namespace pyxchange */


#endif /* ORDER_BOOK */


/* EOF */

