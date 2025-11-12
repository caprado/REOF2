void func_00174de0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00174de0: addiu $sp, $sp, -0x30
    s4 = s2 + 0xd2c;                                            // 0x00174df4: addiu $s4, $s2, 0xd2c
    s1 = s2 + 0x2ab4;                                           // 0x00174dfc: addiu $s1, $s2, 0x2ab4
    func_00167ab0();  // 0x167a90                                // 0x00174e08: jal 0x167a90
    s0 = *(int32_t*)((s2) + 0x2ab0);                            // 0x00174e0c: lw $s0, 0x2ab0($s2)
    /* bnezl $v0, 0x174eb4 */                                   // 0x00174e10: bnezl $v0, 0x174eb4
    v0 = *(int32_t*)((s0) + 0xd98);                             // 0x00174e18: lw $v0, 0xd98($s0)
    if (v0 > 0) goto label_0x174e60;                            // 0x00174e1c: bgtz $v0, 0x174e60
    v1 = *(int32_t*)((s1) + 4);                                 // 0x00174e24: lw $v1, 4($s1)
    v0 = -3;                                                    // 0x00174e28: addiu $v0, $zero, -3
    if (v1 == v0) goto label_0x174e38;                          // 0x00174e2c: beq $v1, $v0, 0x174e38
    s1 = *(int32_t*)((s0) + 0xdc0);                             // 0x00174e34: lw $s1, 0xdc0($s0)
label_0x174e38:
    if (s1 < 0) goto label_0x174e64;                            // 0x00174e38: bltzl $s1, 0x174e64
    v0 = *(int32_t*)((s0) + 0xd9c);                             // 0x00174e3c: lw $v0, 0xd9c($s0)
    func_00174f18();  // 0x174ed0                                // 0x00174e40: jal 0x174ed0
    v0 = -1;                                                    // 0x00174e4c: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x174e60;                          // 0x00174e50: beq $v1, $v0, 0x174e60
    v0 = s1 + v1;                                               // 0x00174e54: addu $v0, $s1, $v1
    s3 = 1;                                                     // 0x00174e58: addiu $s3, $zero, 1
    *(uint32_t*)((s0) + 0xd98) = v0;                            // 0x00174e5c: sw $v0, 0xd98($s0)
label_0x174e60:
    v0 = *(int32_t*)((s0) + 0xd9c);                             // 0x00174e60: lw $v0, 0xd9c($s0)
label_0x174e64:
    if (v0 > 0) goto label_0x174e88;                            // 0x00174e64: bgtz $v0, 0x174e88
    /* nop */                                                   // 0x00174e68: nop 
    v0 = *(int32_t*)((s4) + 0x20);                              // 0x00174e6c: lw $v0, 0x20($s4)
    if (v0 <= 0) goto label_0x174e88;                           // 0x00174e70: blez $v0, 0x174e88
    /* nop */                                                   // 0x00174e74: nop 
    *(uint32_t*)((s0) + 0xd9c) = v0;                            // 0x00174e78: sw $v0, 0xd9c($s0)
    s3 = 1;                                                     // 0x00174e7c: addiu $s3, $zero, 1
    v0 = *(int32_t*)((s4) + 0x24);                              // 0x00174e80: lw $v0, 0x24($s4)
    *(uint32_t*)((s0) + 0xda0) = v0;                            // 0x00174e84: sw $v0, 0xda0($s0)
label_0x174e88:
    if (s3 == 0) goto label_0x174eb0;                           // 0x00174e88: beqz $s3, 0x174eb0
    return func_00174fa0();  // Tail call                        // 0x00174ea8: j 0x174f18
    sp = sp + 0x30;                                             // 0x00174eac: addiu $sp, $sp, 0x30
label_0x174eb0:
    return;                                                     // 0x00174ec8: jr $ra
    sp = sp + 0x30;                                             // 0x00174ecc: addiu $sp, $sp, 0x30
}