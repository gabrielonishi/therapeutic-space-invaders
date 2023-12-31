/*
 * rtos_config.h
 *
 * Created: 10/10/2022 17:38:37
 *  Author: sarah
 */ 


#ifndef RTOS_CONFIG_H_
#define RTOS_CONFIG_H_


extern void vApplicationStackOverflowHook(xTaskHandle *pxTask, signed char *pcTaskName);
extern void vApplicationIdleHook(void);
extern void vApplicationTickHook(void);
extern void vApplicationMallocFailedHook(void);
extern void xPortSysTickHandler(void);


#endif /* RTOS_CONFIG_H_ */