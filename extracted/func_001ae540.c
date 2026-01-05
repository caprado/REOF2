/** @category: game/init @status: complete @author: caprado */
void func_001ae540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ae540: addiu $sp, $sp, -0x10
    a0 = 0x31 << 16;                                            // 0x001ae544: lui $a0, 0x31
    a0 = a0 + 0x37a0;                                           // 0x001ae54c: addiu $a0, $a0, 0x37a0
    func_00107c70();  // 107c70                                // 0x001ae554: jal 0x107c70
    a2 = 0x100;                                                 // 0x001ae558: addiu $a2, $zero, 0x100
    func_001ae570();  // 1ae570                                // 0x001ae55c: jal 0x1ae570
    /* nop */                                                   // 0x001ae560: nop 
    return;                                                     // 0x001ae568: jr $ra
    sp = sp + 0x10;                                             // 0x001ae56c: addiu $sp, $sp, 0x10
}