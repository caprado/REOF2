void func_001263b4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001263b4: addiu $sp, $sp, -0x20
    v1 = (t0 < 0x10) ? 1 : 0;                                   // 0x001263b8: slti $v1, $t0, 0x10
    if (v1 != 0) goto label_0x126440;                           // 0x001263d0: bnez $v1, 0x126440
    v1 = *(uint8_t*)(a3);                                       // 0x001263d8: lbu $v1, 0($a3)
    a1 = 0 | 0x8000;                                            // 0x001263dc: ori $a1, $zero, 0x8000
    a0 = *(uint8_t*)((a3) + 1);                                 // 0x001263e0: lbu $a0, 1($a3)
    v1 = v1 << 8;                                               // 0x001263e4: sll $v1, $v1, 8
    a0 = a0 | v1;                                               // 0x001263e8: or $a0, $a0, $v1
    if (a0 != a1) goto label_0x126444;                          // 0x001263ec: bne $a0, $a1, 0x126444
    v1 = *(uint8_t*)((a3) + 2);                                 // 0x001263f4: lbu $v1, 2($a3)
    a1 = 0x7fff;                                                // 0x001263f8: addiu $a1, $zero, 0x7fff
    a0 = *(uint8_t*)((a3) + 3);                                 // 0x001263fc: lbu $a0, 3($a3)
    a1 = (a1 < t0) ? 1 : 0;                                     // 0x00126400: slt $a1, $a1, $t0
    v1 = v1 << 8;                                               // 0x00126404: sll $v1, $v1, 8
    v1 = v1 | a0;                                               // 0x00126408: or $v1, $v1, $a0
    a0 = v1 + -2;                                               // 0x0012640c: addiu $a0, $v1, -2
    s0 = v1 + 4;                                                // 0x00126410: addiu $s0, $v1, 4
    if (a1 == 0) goto label_0x126440;                           // 0x00126414: beqz $a1, 0x126440
    a0 = a3 + a0;                                               // 0x00126418: addu $a0, $a3, $a0
    a1 = 0x22 << 16;                                            // 0x0012641c: lui $a1, 0x22
    a2 = 6;                                                     // 0x00126420: addiu $a2, $zero, 6
    func_00107a20();  // 107a20                                // 0x00126424: jal 0x107a20
    a1 = a1 + 0x2460;                                           // 0x00126428: addiu $a1, $a1, 0x2460
    if (v0 != 0) goto label_0x126440;                           // 0x0012642c: bnez $v0, 0x126440
    /* bnezl $s1, 0x12643c */                                   // 0x00126434: bnezl $s1, 0x12643c
    *(uint16_t*)(s1) = s0;                                      // 0x00126438: sh $s0, 0($s1)
    v0 = 1;                                                     // 0x0012643c: addiu $v0, $zero, 1
label_0x126440:
label_0x126444:
    return;                                                     // 0x0012644c: jr $ra
    sp = sp + 0x20;                                             // 0x00126450: addiu $sp, $sp, 0x20
}