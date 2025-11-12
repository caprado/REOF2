void func_00180198() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00180198: addiu $sp, $sp, -0x40
    v0 = 0x334;                                                 // 0x0018019c: addiu $v0, $zero, 0x334
    v1 = 0x26 << 16;                                            // 0x001801a4: lui $v1, 0x26
    a2 = v1 + 0x7908;                                           // 0x001801b4: addiu $a2, $v1, 0x7908
    v0 = a0 + a2;                                               // 0x001801c4: addu $v0, $a0, $a2
    v1 = *(int32_t*)(v0);                                       // 0x001801c8: lw $v1, 0($v0)
    if (v1 == 0) goto label_0x180254;                           // 0x001801cc: beqz $v1, 0x180254
    v0 = -1;                                                    // 0x001801d0: addiu $v0, $zero, -1
    v0 = a2 + a0;                                               // 0x001801d4: addu $v0, $a2, $a0
    v1 = *(int32_t*)((v0) + 4);                                 // 0x001801d8: lw $v1, 4($v0)
    if (v1 != 0) goto label_0x1801f4;                           // 0x001801dc: bnez $v1, 0x1801f4
    /* nop */                                                   // 0x001801e0: nop 
    func_00180630();  // 0x1805d8                                // 0x001801e4: jal 0x1805d8
    if (v0 < 0) goto label_0x180254;                            // 0x001801ec: bltz $v0, 0x180254
    v0 = -1;                                                    // 0x001801f0: addiu $v0, $zero, -1
label_0x1801f4:
    func_00180698();  // 0x180630                                // 0x001801f4: jal 0x180630
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x00180200: lbu $v0, 2($s0)
    /* beqzl $v0, 0x180248 */                                   // 0x00180204: beqzl $v0, 0x180248
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00180208: lw $v0, 4($s0)
    a1 = s0 + 0x1c;                                             // 0x0018020c: addiu $a1, $s0, 0x1c
    if (a1 == 0) goto label_0x180244;                           // 0x00180210: beqz $a1, 0x180244
    func_00107b68();  // 0x107ab8                                // 0x00180218: jal 0x107ab8
    v1 = 0x334;                                                 // 0x00180220: addiu $v1, $zero, 0x334
    a0 = *(uint8_t*)((s0) + 2);                                 // 0x00180224: lbu $a0, 2($s0)
    /* multiply: s1 * v1 -> hi:lo */                            // 0x00180228: mult $ac3, $s1, $v1
    a1 = 0x26 << 16;                                            // 0x0018022c: lui $a1, 0x26
    a0 = a0 + 0x1c;                                             // 0x00180230: addiu $a0, $a0, 0x1c
    a1 = a1 + 0x791c;                                           // 0x00180234: addiu $a1, $a1, 0x791c
    a0 = s0 + a0;                                               // 0x00180238: addu $a0, $s0, $a0
    func_00180848();  // 0x180760                                // 0x0018023c: jal 0x180760
    a1 = v1 + a1;                                               // 0x00180240: addu $a1, $v1, $a1
label_0x180244:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00180244: lw $v0, 4($s0)
    /* bnezl $v0, 0x180254 */                                   // 0x00180248: bnezl $v0, 0x180254
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x0018024c: lbu $v0, 2($s0)
    v0 = -1;                                                    // 0x00180250: addiu $v0, $zero, -1
label_0x180254:
    return;                                                     // 0x00180264: jr $ra
    sp = sp + 0x40;                                             // 0x00180268: addiu $sp, $sp, 0x40
}