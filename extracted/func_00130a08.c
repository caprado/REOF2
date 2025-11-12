void func_00130a08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00130a08: addiu $sp, $sp, -0x30
    s3 = 0x20 << 16;                                            // 0x00130a10: lui $s3, 0x20
    func_00141ee0();  // 0x141e50                                // 0x00130a24: jal 0x141e50
    a0 = s3 + 0xeb0;                                            // 0x00130a28: addiu $a0, $s3, 0xeb0
    if (v0 == 0) goto label_0x130a68;                           // 0x00130a2c: beqz $v0, 0x130a68
    v0 = 0x20 << 16;                                            // 0x00130a30: lui $v0, 0x20
    s2 = 1;                                                     // 0x00130a34: addiu $s2, $zero, 1
    s0 = v0 + 0xec0;                                            // 0x00130a38: addiu $s0, $v0, 0xec0
    s1 = 0x27;                                                  // 0x00130a3c: addiu $s1, $zero, 0x27
label_0x130a40:
    v0 = g_00200ec0;  // Global at 0x00200ec0                   // 0x00130a40: lb $v0, 0($s0)
    if (v0 != s2) goto label_0x130a58;                          // 0x00130a44: bnel $v0, $s2, 0x130a58
    s1 = s1 + -1;                                               // 0x00130a48: addiu $s1, $s1, -1
    func_00130a08();  // 0x130838                                // 0x00130a4c: jal 0x130838
    s1 = s1 + -1;                                               // 0x00130a54: addiu $s1, $s1, -1
label_0x130a58:
    if (s1 >= 0) goto label_0x130a40;                           // 0x00130a58: bgez $s1, 0x130a40
    s0 = s0 + 0x5c;                                             // 0x00130a5c: addiu $s0, $s0, 0x5c
    v0 = s3 + 0xeb0;                                            // 0x00130a60: addiu $v0, $s3, 0xeb0
    g_00200eb0 = 0;  // Global at 0x00200eb0                    // 0x00130a64: sw $zero, 0($v0)
label_0x130a68:
    return;                                                     // 0x00130a7c: jr $ra
    sp = sp + 0x30;                                             // 0x00130a80: addiu $sp, $sp, 0x30
}