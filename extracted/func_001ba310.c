/** @category: game/update @status: complete @author: caprado */
void func_001ba310() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba310: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6384);                           // 0x001ba318: lw $v1, -0x6384($gp)
    if (v1 == 0) goto label_0x1ba354;                           // 0x001ba31c: beqz $v1, 0x1ba354
    /* nop */                                                   // 0x001ba320: nop 
    func_001ae0b0();  // 0x1ade90                                // 0x001ba324: jal 0x1ade90
    /* nop */                                                   // 0x001ba328: nop 
    func_001b3440();  // 0x1b3430                                // 0x001ba32c: jal 0x1b3430
    /* nop */                                                   // 0x001ba330: nop 
    func_001a18c0();  // 0x1a17e0                                // 0x001ba334: jal 0x1a17e0
    /* nop */                                                   // 0x001ba338: nop 
    func_001ba950();  // 0x1ba8f0                                // 0x001ba33c: jal 0x1ba8f0
    /* nop */                                                   // 0x001ba340: nop 
    func_001ac9d0();  // 0x1ac9c0                                // 0x001ba344: jal 0x1ac9c0
    /* nop */                                                   // 0x001ba348: nop 
    func_001d3110();  // 0x1d30b0                                // 0x001ba34c: jal 0x1d30b0
    /* nop */                                                   // 0x001ba350: nop 
label_0x1ba354:
    return;                                                     // 0x001ba358: jr $ra
    sp = sp + 0x10;                                             // 0x001ba35c: addiu $sp, $sp, 0x10
}