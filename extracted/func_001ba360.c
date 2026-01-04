/** @category: game/render @status: complete @author: caprado */
void func_001ba360() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ba360: addiu $sp, $sp, -0x10
    v1 = *(int32_t*)((gp) + -0x6384);                           // 0x001ba368: lw $v1, -0x6384($gp)
    if (v1 == 0) goto label_0x1ba3ac;                           // 0x001ba36c: beqz $v1, 0x1ba3ac
    /* nop */                                                   // 0x001ba370: nop 
    func_001ae8d0();  // 1ae8d0                                // 0x001ba374: jal 0x1ae8d0
    /* nop */                                                   // 0x001ba378: nop 
    func_001ba950();  // 1ba950                                // 0x001ba37c: jal 0x1ba950
    /* nop */                                                   // 0x001ba380: nop 
    func_001b5920();  // 1b5920                                // 0x001ba384: jal 0x1b5920
    /* nop */                                                   // 0x001ba388: nop 
    func_001b3450();  // 1b3450                                // 0x001ba38c: jal 0x1b3450
    /* nop */                                                   // 0x001ba390: nop 
    func_001bb890();  // 1bb890                                // 0x001ba394: jal 0x1bb890
    /* nop */                                                   // 0x001ba398: nop 
    func_001ae910();  // 1ae910                                // 0x001ba39c: jal 0x1ae910
    /* nop */                                                   // 0x001ba3a0: nop 
    func_001ac0e0();  // 1ac0e0                                // 0x001ba3a4: jal 0x1ac0e0
    /* nop */                                                   // 0x001ba3a8: nop 
label_0x1ba3ac:
    return;                                                     // 0x001ba3b0: jr $ra
    sp = sp + 0x10;                                             // 0x001ba3b4: addiu $sp, $sp, 0x10
}