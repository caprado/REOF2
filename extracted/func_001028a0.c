void func_001028a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001028a0: addiu $sp, $sp, -0x10
    func_00102910();  // 102910                                // 0x001028a8: jal 0x102910
    /* nop */                                                   // 0x001028ac: nop 
    v1 = 1;                                                     // 0x001028b0: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x1028d0;                          // 0x001028b4: bne $v0, $v1, 0x1028d0
    v1 = 0x1000 << 16;                                          // 0x001028bc: lui $v1, 0x1000
    a0 = 8;                                                     // 0x001028c0: addiu $a0, $zero, 8
    v1 = v1 | 0x3810;                                           // 0x001028c4: ori $v1, $v1, 0x3810
    v0 = 1;                                                     // 0x001028c8: addiu $v0, $zero, 1
    g_10000000 = a0;  // Global at 0x10000000                   // 0x001028cc: sw $a0, 0($v1)
label_0x1028d0:
    return;                                                     // 0x001028d4: jr $ra
    sp = sp + 0x10;                                             // 0x001028d8: addiu $sp, $sp, 0x10
}