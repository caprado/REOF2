void func_00180270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00180270: addiu $sp, $sp, -0x40
    func_00180340();  // 180340                                // 0x00180288: jal 0x180340
    v1 = 0x334;                                                 // 0x00180290: addiu $v1, $zero, 0x334
    v0 = 0x26 << 16;                                            // 0x00180294: lui $v0, 0x26
    /* multiply: s1 * v1 -> hi:lo */                            // 0x00180298: mult $ac3, $s1, $v1
    v0 = v0 + 0x7908;                                           // 0x0018029c: addiu $v0, $v0, 0x7908
    v0 = v0 + v1;                                               // 0x001802a0: addu $v0, $v0, $v1
    a0 = g_0026790c;  // Global at 0x0026790c                   // 0x001802a4: lw $a0, 4($v0)
    if (a0 != 0) goto label_0x1802c0;                           // 0x001802a8: bnez $a0, 0x1802c0
    /* nop */                                                   // 0x001802ac: nop 
    func_001805d8();  // 1805d8                                // 0x001802b0: jal 0x1805d8
    if (v0 < 0) goto label_0x180328;                            // 0x001802b8: bltz $v0, 0x180328
    v0 = -1;                                                    // 0x001802bc: addiu $v0, $zero, -1
label_0x1802c0:
    func_00180698();  // 180698                                // 0x001802c0: jal 0x180698
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x001802cc: lbu $v0, 3($s0)
    if (v0 == 0) goto label_0x180318;                           // 0x001802d0: beqz $v0, 0x180318
    v0 = s0 + 0x1c;                                             // 0x001802d4: addiu $v0, $s0, 0x1c
    if (v0 == 0) goto label_0x180318;                           // 0x001802d8: beqz $v0, 0x180318
    a1 = *(uint8_t*)((s0) + 2);                                 // 0x001802e0: lbu $a1, 2($s0)
    a2 = *(uint8_t*)((s0) + 3);                                 // 0x001802e4: lbu $a2, 3($s0)
    a1 = a1 + s0;                                               // 0x001802e8: addu $a1, $a1, $s0
    func_00107ab8();  // 107ab8                                // 0x001802ec: jal 0x107ab8
    a1 = a1 + 0x1c;                                             // 0x001802f0: addiu $a1, $a1, 0x1c
    v1 = 0x334;                                                 // 0x001802f4: addiu $v1, $zero, 0x334
    a0 = *(uint8_t*)((s0) + 2);                                 // 0x001802f8: lbu $a0, 2($s0)
    /* multiply: s1 * v1 -> hi:lo */                            // 0x001802fc: mult $ac3, $s1, $v1
    a1 = 0x26 << 16;                                            // 0x00180300: lui $a1, 0x26
    a0 = a0 + 0x1c;                                             // 0x00180304: addiu $a0, $a0, 0x1c
    a1 = a1 + 0x791c;                                           // 0x00180308: addiu $a1, $a1, 0x791c
    a0 = s0 + a0;                                               // 0x0018030c: addu $a0, $s0, $a0
    func_00180760();  // 180760                                // 0x00180310: jal 0x180760
    a1 = v1 + a1;                                               // 0x00180314: addu $a1, $v1, $a1
label_0x180318:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00180318: lw $v0, 4($s0)
    /* bnezl $v0, 0x180328 */                                   // 0x0018031c: bnezl $v0, 0x180328
    v0 = *(uint8_t*)((s0) + 3);                                 // 0x00180320: lbu $v0, 3($s0)
    v0 = -1;                                                    // 0x00180324: addiu $v0, $zero, -1
label_0x180328:
    return;                                                     // 0x00180338: jr $ra
    sp = sp + 0x40;                                             // 0x0018033c: addiu $sp, $sp, 0x40
}