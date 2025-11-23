/*
 * stm32f446xx.h
 *
 *  Created on: Nov 21, 2025
 *      Author: HP
 */

#ifndef STM32F446XX_H_
#define STM32F446XX_H_

/*GPIO BASE ADDRESSES(AHB1 BUS)
 *
 */
//Starting address of GPIOA
#define GPIOA_BASEADDR 0x40020000U
#define GPIOB_BASEADDR 0x40020400U
#define GPIOC_BASEADDR 0x40020800U
#define GPIOD_BASEADDR 0x40020C00U
#define GPIOE_BASEADDR 0x40021000U
#define GPIOF_BASEADDR 0x40021400U
#define GPIOG_BASEADDR 0x40021800U
#define GPIOH_BASEADDR 0x40021C00U

/*
 * GPIO Register structure
 */
typedef struct
{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFRL;
	volatile uint32_t AFRH;
}
GPIO_RegDef_t;
/*
 * GPIO POINTERS
 */
#define GPIOA ((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define GPIOB ((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define GPIOC ((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define GPIOD ((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define GPIOE ((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define GPIOF ((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define GPIOG ((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define GPIOH ((GPIO_RegDef_t*)GPIOH_BASEADDR)


/*
 * RCC BASE ADDRESS
 */
#define RCC_BASEADDR  0x40023800U
/*
 * RCC REGISTER STRUCTURE (STM23F4 Series)
 */
typedef struct
{
	volatile uint32_t CR;
	volatile uint32_t PLCFGR;
	volatile uint32_t CFGR;
	volatile uint32_t CIR;
	volatile uint32_t AHB1RSTR;
	volatile uint32_t AHB2RSTR;
	volatile uint32_t AHB3RSTR;
	volatile uint32_t RESERVED0;
	volatile uint32_t APB1RSTR;
	volatile uint32_t APB2RSTR;
	volatile uint32_t AHB1ENR;
	volatile uint32_t AHB2ENR;
	volatile uint32_t AHB3ENR;
	volatile uint32_t APB1ENR;
	volatile uint32_t APB2ENR;
	volatile uint32_t AHB1LPENR;
	volatile uint32_t AHB2LPENR;
	volatile uint32_t AHB3LPENR;
	volatile uint32_t APB1LPENR;
	volatile uint32_t APB2LPENR;
	volatile uint32_t BDCR;
	volatile uint32_t CSR;
	volatile uint32_t SSCGR;
	volatile uint32_t PLLI2SCFGR;
	volatile uint32_t PLLSAICFGR;
	volatile uint32_t DCKCFGR;
	volatile uint32_t CKGATENR;
	volatile uint32_t DCKCFGR2;
} RCC_RegDef_t;


/*
 * rcc pointer
 */
#define RCC  ((RCC_RegDef_t*)RCC_BASEADDR)
/*
 * *CLOCK ENABLE MACROS(AHB1 BUS FOR GPIO)
 */
#define GPIOA_CLK_EN()  (RCC->AHB1ENR |= (1<<0))
#define GPIOB_CLK_EN()  (RCC->AHB1ENR |= (1<<1))
#define GPIOC_CLK_EN()  (RCC->AHB1ENR |= (1<<2))
#define GPIOD_CLK_EN()  (RCC->AHB1ENR |= (1<<3))
#define GPIOE_CLK_EN()  (RCC->AHB1ENR |= (1<<4))
#define GPIOF_CLK_EN()  (RCC->AHB1ENR |= (1<<5))
#define GPIOG_CLK_EN()  (RCC->AHB1ENR |= (1<<6))
#define GPIOH_CLK_EN()  (RCC->AHB1ENR |= (1<<7))



 */
};


#endif /* STM32F446XX_H_ */
