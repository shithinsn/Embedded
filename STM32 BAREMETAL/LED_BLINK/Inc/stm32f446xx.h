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
	volatile uint32_t CR;              // RCC clock control register                    (0x00)
	volatile uint32_t PLCFGR;          // RCC PLL configuration register                (0x04)
	volatile uint32_t CFGR;            // RCC clock configuration register              (0x08)
	volatile uint32_t CIR;             // RCC clock interrupt register                  (0x0C)
	volatile uint32_t AHB1RSTR;        // RCC AHB1 peripheral reset register            (0x10)
	volatile uint32_t AHB2RSTR;        // RCC AHB2 peripheral reset register            (0x14)
	volatile uint32_t AHB3RSTR;        // RCC AHB3 peripheral reset register            (0x18)
	volatile uint32_t RESERVED0;       //RESERVED                                       (0x1C)
	volatile uint32_t APB1RSTR;        // RCC APB1 peripheral reset register            (0x20)
	volatile uint32_t APB2RSTR;        // RCC APB2 peripheral reset register            (0x24)
	volatile uint32_t RESERVED1[2];    //RESERVED                                       (0x28-0x2C)
	volatile uint32_t AHB1ENR;         // RCC AHB1 peripheral clock enable register     (0x30)
	volatile uint32_t AHB2ENR;         // RCC AHB2 peripheral clock enable register     (0x34)
	volatile uint32_t AHB3ENR;         // RCC AHB3 peripheral clock enable register     (0x38)
	volatile uint32_t RESERVED2;       //RESERVED                                       (0x3C)
	volatile uint32_t APB1ENR;         //RCC APB1 peripheral clock enable register     (0x40)
	volatile uint32_t APB2ENR;         //RCC APB2 peripheral clock enable register     (0x44)
	volatile uint32_t RESERVED3[2];    //RESERVED                                      (0x48-0x4C)
	volatile uint32_t AHB1LPENR;       // RCC AHB1 peripheral clock enable in low power (0x50)
	volatile uint32_t AHB2LPENR;       // RCC AHB2 peripheral clock enable in low power (0x54)
	volatile uint32_t AHB3LPENR;       // RCC AHB3 peripheral clock enable in low power (0x58)
	volatile uint32_t RESERVED4;       //RESERVED                                       (0x5C)
	volatile uint32_t APB1LPENR;       // RCC APB1 peripheral clock enable in low power (0x60)
	volatile uint32_t APB2LPENR;       // RCC APB2 peripheral clock enable in low power (0x64)
	volatile uint32_t RESERVED5[2];    //reserved                                       (0x68-0x6C)
	volatile uint32_t BDCR;            // RCC Backup domain control register            (0x70)
	volatile uint32_t CSR;             // RCC clock control & status register           (0x74)
	volatile uint32_t RESERVED6[2];    // Reserved                                      (0x78-0x7C)
	volatile uint32_t SSCGR;           // RCC spread spectrum clock generation register (0x80)
	volatile uint32_t PLLI2SCFGR;      // RCC PLLI2S configuration register             (0x84)
	volatile uint32_t PLLSAICFGR;      // RCC PLLSAI configuration register             (0x88)
	volatile uint32_t DCKCFGR;         // RCC Dedicated Clocks configuration register   (0x8C)
	volatile uint32_t CKGATENR;        // RCC clocks gated enable register              (0x90)
	volatile uint32_t DCKCFGR2;        // RCC Dedicated Clocks configuration register 2 (0x94)
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
