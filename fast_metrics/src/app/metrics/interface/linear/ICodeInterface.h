/*
 * ICodeInterface.h
 *
 *  Created on: Jan 5, 2018
 *      Author: ducvd
 */

#ifndef APP_METRICS_INTERFACE_ICODEINTERFACE_H_
#define APP_METRICS_INTERFACE_ICODEINTERFACE_H_


class ICodeInterface
{
public:
	virtual ~ICodeInterface() {}
	virtual long complexity_() = 0;
};


#endif /* APP_METRICS_INTERFACE_ICODEINTERFACE_H_ */
