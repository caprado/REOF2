void func_0014f370() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0014f370: addiu $sp, $sp, -0x10
    a2 = 0x21 << 16;                                            // 0x0014f374: lui $a2, 0x21
    a2 = a2 + 0xe08;                                            // 0x0014f37c: addiu $a2, $a2, 0xe08
    goto label_0x14f390;                                        // 0x0014f384: j 0x14f390
    sp = sp + 0x10;                                             // 0x0014f388: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0014f38c: nop 
label_0x14f390:
    sp = sp + -0x50;                                            // 0x0014f390: addiu $sp, $sp, -0x50
    v1 = *(int32_t*)((a1) + 4);                                 // 0x0014f3c4: lw $v1, 4($a1)
    a0 = *(int32_t*)((a1) + 8);                                 // 0x0014f3c8: lw $a0, 8($a1)
    a2 = v1 + 0xf;                                              // 0x0014f3cc: addiu $a2, $v1, 0xf
    v0 = (v1 < 0) ? 1 : 0;                                      // 0x0014f3d0: slti $v0, $v1, 0
    if (v0 != 0) v1 = a2;                                       // 0x0014f3d4: movn $v1, $a2, $v0
    v0 = (a0 < 0) ? 1 : 0;                                      // 0x0014f3d8: slti $v0, $a0, 0
    a3 = a0 + 0xf;                                              // 0x0014f3dc: addiu $a3, $a0, 0xf
    s6 = v1 >> 4;                                               // 0x0014f3e0: sra $s6, $v1, 4
    if (v0 != 0) a0 = a3;                                       // 0x0014f3e4: movn $a0, $a3, $v0
    a2 = *(int32_t*)(s5);                                       // 0x0014f3e8: lw $a2, 0($s5)
    s3 = a0 >> 4;                                               // 0x0014f3ec: sra $s3, $a0, 4
    if (s6 <= 0) goto label_0x14f458;                           // 0x0014f3f0: blez $s6, 0x14f458
    s2 = *(int32_t*)(a1);                                       // 0x0014f3f4: lw $s2, 0($a1)
    goto label_0x14f408;                                        // 0x0014f3f8: b 0x14f408
    v1 = *(int32_t*)((s5) + 8);                                 // 0x0014f3fc: lw $v1, 8($s5)
    v1 = *(int32_t*)((s5) + 8);                                 // 0x0014f400: lw $v1, 8($s5)
    /* nop */                                                   // 0x0014f404: nop 
label_0x14f408:
    /* multiply: v1 * s4 -> hi:lo */                            // 0x0014f408: mult $ac3, $v1, $s4
    v0 = v1 << 1;                                               // 0x0014f40c: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x0014f410: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x0014f414: sll $v0, $v0, 3
    if (s3 <= 0) goto label_0x14f448;                           // 0x0014f418: blez $s3, 0x14f448
    s1 = a2 + v0;                                               // 0x0014f41c: addu $s1, $a2, $v0
label_0x14f428:
    s1 = s1 + 0x180;                                            // 0x0014f428: addiu $s1, $s1, 0x180
    s2 = s2 + 0x400;                                            // 0x0014f430: addiu $s2, $s2, 0x400
    s0 = s0 + -1;                                               // 0x0014f434: addiu $s0, $s0, -1
    func_0014cc78();  // 0x14a510                                // 0x0014f438: jal 0x14a510
    if (s0 != 0) goto label_0x14f428;                           // 0x0014f440: bnez $s0, 0x14f428
label_0x14f448:
    s4 = s4 + 1;                                                // 0x0014f448: addiu $s4, $s4, 1
    v0 = (s4 < s6) ? 1 : 0;                                     // 0x0014f44c: slt $v0, $s4, $s6
    /* bnezl $v0, 0x14f400 */                                   // 0x0014f450: bnezl $v0, 0x14f400
    a2 = *(int32_t*)(s5);                                       // 0x0014f454: lw $a2, 0($s5)
label_0x14f458:
    return;                                                     // 0x0014f47c: jr $ra
    sp = sp + 0x50;                                             // 0x0014f480: addiu $sp, $sp, 0x50
}