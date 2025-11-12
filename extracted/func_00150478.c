void func_00150478() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00150478: addiu $sp, $sp, -0x20
    func_00155b20();  // 0x155af8                                // 0x0015048c: jal 0x155af8
    if (v0 == 0) goto label_0x1504b8;                           // 0x00150494: beqz $v0, 0x1504b8
    a1 = 0xff03 << 16;                                          // 0x0015049c: lui $a1, 0xff03
    a1 = a1 | 0x20c;                                            // 0x001504ac: ori $a1, $a1, 0x20c
    return func_00150380();  // Tail call                        // 0x001504b0: j 0x150330
    sp = sp + 0x20;                                             // 0x001504b4: addiu $sp, $sp, 0x20
label_0x1504b8:
    v1 = s0 + 0x58;                                             // 0x001504bc: addiu $v1, $s0, 0x58
    v0 = v1 | a1;                                               // 0x001504c0: or $v0, $v1, $a1
    v0 = v0 & 7;                                                // 0x001504c4: andi $v0, $v0, 7
    if (v0 == 0) goto label_0x150530;                           // 0x001504c8: beqz $v0, 0x150530
    a0 = s0 + 0x98;                                             // 0x001504cc: addiu $a0, $s0, 0x98
label_0x1504d0:
    v1 = v1 + 0x20;                                             // 0x00150510: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x00150514: nop 
    /* nop */                                                   // 0x00150518: nop 
    if (v1 != a0) goto label_0x1504d0;                          // 0x0015051c: bne $v1, $a0, 0x1504d0
    a1 = a1 + 0x20;                                             // 0x00150520: addiu $a1, $a1, 0x20
    goto label_0x150564;                                        // 0x00150524: b 0x150564
    /* nop */                                                   // 0x00150528: nop 
    /* nop */                                                   // 0x0015052c: nop 
label_0x150530:
    v1 = v1 + 0x20;                                             // 0x00150550: addiu $v1, $v1, 0x20
    /* nop */                                                   // 0x00150554: nop 
    /* nop */                                                   // 0x00150558: nop 
    if (v1 != a0) goto label_0x150530;                          // 0x0015055c: bne $v1, $a0, 0x150530
    a1 = a1 + 0x20;                                             // 0x00150560: addiu $a1, $a1, 0x20
label_0x150564:
    a2 = *(int32_t*)((v1) + 0x10);                              // 0x00150574: lw $a2, 0x10($v1)
    g_ff030050 = a2;  // Global at 0xff030050                   // 0x0015058c: sw $a2, 0x10($a1)
    return;                                                     // 0x00150598: jr $ra
    sp = sp + 0x20;                                             // 0x0015059c: addiu $sp, $sp, 0x20
}