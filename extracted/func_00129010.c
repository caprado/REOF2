void func_00129010() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00129010: addiu $sp, $sp, -0x20
    a3 = -1;                                                    // 0x00129024: addiu $a3, $zero, -1
    a0 = 3;                                                     // 0x00129028: addiu $a0, $zero, 3
    func_001281b8();  // 1281b8                                // 0x00129034: jal 0x1281b8
    t0 = -1;                                                    // 0x00129038: addiu $t0, $zero, -1
    if (s1 == 0) goto label_0x1290b0;                           // 0x0012903c: beqz $s1, 0x1290b0
    v1 = 2;                                                     // 0x00129040: addiu $v1, $zero, 2
    v0 = *(int8_t*)((s1) + 1);                                  // 0x00129044: lb $v0, 1($s1)
    if (v0 != v1) goto label_0x12905c;                          // 0x00129048: bnel $v0, $v1, 0x12905c
    s0 = *(int32_t*)((s1) + 4);                                 // 0x0012904c: lw $s0, 4($s1)
    func_001294a0();  // 1294a0                                // 0x00129050: jal 0x1294a0
    s0 = *(int32_t*)((s1) + 4);                                 // 0x00129058: lw $s0, 4($s1)
label_0x12905c:
    if (s0 == 0) goto label_0x129078;                           // 0x0012905c: beqz $s0, 0x129078
    *(uint8_t*)(s1) = 0;                                        // 0x00129064: sb $zero, 0($s1)
    func_00130220();  // 130220                                // 0x00129068: jal 0x130220
    *(uint32_t*)((s1) + 4) = 0;                                 // 0x0012906c: sw $zero, 4($s1)
    func_001300e0();  // 1300e0                                // 0x00129070: jal 0x1300e0
label_0x129078:
    func_00107c70();  // 107c70                                // 0x00129080: jal 0x107c70
    a2 = 0x44;                                                  // 0x00129084: addiu $a2, $zero, 0x44
    a0 = 3;                                                     // 0x00129088: addiu $a0, $zero, 3
    a1 = 1;                                                     // 0x00129098: addiu $a1, $zero, 1
    a3 = -1;                                                    // 0x001290a0: addiu $a3, $zero, -1
    t0 = -1;                                                    // 0x001290a4: addiu $t0, $zero, -1
    return func_00128268();  // Tail call                        // 0x001290a8: j 0x1281b8
    sp = sp + 0x20;                                             // 0x001290ac: addiu $sp, $sp, 0x20
label_0x1290b0:
    return;                                                     // 0x001290bc: jr $ra
    sp = sp + 0x20;                                             // 0x001290c0: addiu $sp, $sp, 0x20
}