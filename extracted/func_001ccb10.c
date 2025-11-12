void func_001ccb10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001ccb10: addiu $sp, $sp, -0x10
    at = 0x32 << 16;                                            // 0x001ccb14: lui $at, 0x32
    FPU_F1 = *(float*)((at) + 0x57f4);  // Load float           // 0x001ccb1c: lwc1 $f1, 0x57f4($at)
    FPU_F0 = *(float*)((gp) + -0x7fd8);  // Load float          // 0x001ccb20: lwc1 $f0, -0x7fd8($gp)
    /* FPU: c.olt.s $f1, $f0 */                                 // 0x001ccb24: c.olt.s $f1, $f0
    /* bc1t 0x1ccb44 */                                         // 0x001ccb28: bc1t 0x1ccb44
    /* nop */                                                   // 0x001ccb2c: nop 
    func_001ccff0();  // 0x1ccd50                                // 0x001ccb30: jal 0x1ccd50
    /* nop */                                                   // 0x001ccb34: nop 
    if (v0 == 0) goto label_0x1ccb44;                           // 0x001ccb38: beqz $v0, 0x1ccb44
    at = 0x32 << 16;                                            // 0x001ccb3c: lui $at, 0x32
    g_003257f4 = 0;  // Global at 0x003257f4                    // 0x001ccb40: sw $zero, 0x57f4($at)
label_0x1ccb44:
    return;                                                     // 0x001ccb48: jr $ra
    sp = sp + 0x10;                                             // 0x001ccb4c: addiu $sp, $sp, 0x10
}