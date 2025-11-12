void func_00128be8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a2 = 0x1f << 16;                                            // 0x00128be8: lui $a2, 0x1f
    v1 = a2 + 0x2ec0;                                           // 0x00128bf0: addiu $v1, $a2, 0x2ec0
    v0 = g_001f2ec0;  // Global at 0x001f2ec0                   // 0x00128bf4: lb $v0, 0($v1)
    if (v0 != 0) goto label_0x128c08;                           // 0x00128bf8: bnez $v0, 0x128c08
    goto label_0x128c38;                                        // 0x00128c00: b 0x128c38
label_0x128c08:
    a1 = a1 + 1;                                                // 0x00128c08: addiu $a1, $a1, 1
    v0 = a1 << 4;                                               // 0x00128c0c: sll $v0, $a1, 4
    v1 = (a1 < 0x10) ? 1 : 0;                                   // 0x00128c10: slti $v1, $a1, 0x10
    if (v1 == 0) goto label_0x128c38;                           // 0x00128c14: beqz $v1, 0x128c38
    v0 = v0 + a1;                                               // 0x00128c18: addu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00128c1c: sll $v0, $v0, 2
    v1 = a2 + 0x2ec0;                                           // 0x00128c20: addiu $v1, $a2, 0x2ec0
    v0 = v0 + v1;                                               // 0x00128c24: addu $v0, $v0, $v1
    a0 = *(int8_t*)(v0);                                        // 0x00128c28: lb $a0, 0($v0)
    /* bnezl $a0, 0x128c0c */                                   // 0x00128c2c: bnezl $a0, 0x128c0c
    a1 = a1 + 1;                                                // 0x00128c30: addiu $a1, $a1, 1
label_0x128c38:
    return;                                                     // 0x00128c38: jr $ra
}