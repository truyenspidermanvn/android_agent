/*
 * IDesignInterface.h
 *
 *  Created on: Jan 5, 2018
 *      Author: ducvd
 */

#ifndef APP_METRICS_INTERFACE_IDESIGNINTERFACE_H_
#define APP_METRICS_INTERFACE_IDESIGNINTERFACE_H_


class IDesignInterface
{
public:
	virtual ~IDesignInterface() {}
	virtual long complexity_() = 0;	
};


#endif /* APP_METRICS_INTERFACE_IDESIGNINTERFACE_H_ */
