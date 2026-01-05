/** @category game/conditional @status complete @author caprado */
void func_001d30b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d30b0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001d30b4: lui $at, 0x31
    v1 = 1;                                                     // 0x001d30bc: addiu $v1, $zero, 1
    a0 = g_003137b5;  // Global at 0x003137b5                   // 0x001d30c0: lbu $a0, 0x37b5($at)
    if (a0 != v1) goto label_0x1d30d4;                          // 0x001d30c4: bne $a0, $v1, 0x1d30d4
    /* nop */                                                   // 0x001d30c8: nop 
    func_0034d600();  // 0x34d600                               // 0x001d30cc: jal 0x34d600
    /* nop */                                                   // 0x001d30d0: nop 
label_0x1d30d4:
    return;                                                     // 0x001d30d8: jr $ra
    sp = sp + 0x10;                                             // 0x001d30dc: addiu $sp, $sp, 0x10
}