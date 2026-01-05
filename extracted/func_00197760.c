void func_00197760() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00197760: addiu $sp, $sp, -0x30
    v0 = 0xff;                                                  // 0x00197764: addiu $v0, $zero, 0xff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x0019776c: addu.qb $zero, $sp, $s1
    a3 = *(int32_t*)((gp) + -0x6474);                           // 0x00197774: lw $a3, -0x6474($gp)
    if (a3 != v0) goto label_0x197788;                          // 0x00197778: bne $a3, $v0, 0x197788
    goto label_0x1977a0;                                        // 0x00197780: b 0x1977a0
    a3 = 0x80;                                                  // 0x00197784: addiu $a3, $zero, 0x80
label_0x197788:
    if (a3 == 0) goto label_0x1977a4;                           // 0x00197788: beqz $a3, 0x1977a4
    a1 = 0x38 << 16;                                            // 0x0019778c: lui $a1, 0x38
    a3 = a3 >> 1;                                               // 0x00197790: sra $a3, $a3, 1
    if (a3 != 0) goto label_0x1977a0;                           // 0x00197794: bnez $a3, 0x1977a0
    /* nop */                                                   // 0x00197798: nop 
    a3 = 1;                                                     // 0x0019779c: addiu $a3, $zero, 1
label_0x1977a0:
    a1 = 0x38 << 16;                                            // 0x001977a0: lui $a1, 0x38
label_0x1977a4:
    v0 = 0x28 << 16;                                            // 0x001977a4: lui $v0, 0x28
    v1 = a0 & a1;                                               // 0x001977a8: and $v1, $a0, $a1
    if (v1 == v0) goto label_0x197824;                          // 0x001977ac: beq $v1, $v0, 0x197824
    v0 = 0x20 << 16;                                            // 0x001977b0: lui $v0, 0x20
    if (v1 == v0) goto label_0x19781c;                          // 0x001977b4: beq $v1, $v0, 0x19781c
    /* nop */                                                   // 0x001977b8: nop 
    v0 = 0x30 << 16;                                            // 0x001977bc: lui $v0, 0x30
    if (v1 == v0) goto label_0x197814;                          // 0x001977c0: beq $v1, $v0, 0x197814
    v0 = 0x10 << 16;                                            // 0x001977c4: lui $v0, 0x10
    if (v1 == v0) goto label_0x19780c;                          // 0x001977c8: beq $v1, $v0, 0x19780c
    /* nop */                                                   // 0x001977cc: nop 
    v0 = 0x18 << 16;                                            // 0x001977d0: lui $v0, 0x18
    if (v1 == v0) goto label_0x197804;                          // 0x001977d4: beq $v1, $v0, 0x197804
    v0 = 8 << 16;                                               // 0x001977d8: lui $v0, 8
    if (v1 == v0) goto label_0x1977fc;                          // 0x001977dc: beq $v1, $v0, 0x1977fc
    /* nop */                                                   // 0x001977e0: nop 
    if (v1 == a1) goto label_0x1977f4;                          // 0x001977e4: beq $v1, $a1, 0x1977f4
    /* nop */                                                   // 0x001977e8: nop 
    goto label_0x197828;                                        // 0x001977ec: b 0x197828
    if (v1 == 0) t0 = 0;                                        // 0x001977f0: movz $t0, $zero, $v1
label_0x1977f4:
    goto label_0x197828;                                        // 0x001977f4: b 0x197828
    t0 = 1;                                                     // 0x001977f8: addiu $t0, $zero, 1
label_0x1977fc:
    goto label_0x197828;                                        // 0x001977fc: b 0x197828
    t0 = 2;                                                     // 0x00197800: addiu $t0, $zero, 2
label_0x197804:
    goto label_0x197828;                                        // 0x00197804: b 0x197828
    t0 = 3;                                                     // 0x00197808: addiu $t0, $zero, 3
label_0x19780c:
    goto label_0x197828;                                        // 0x0019780c: b 0x197828
    t0 = 4;                                                     // 0x00197810: addiu $t0, $zero, 4
label_0x197814:
    goto label_0x197828;                                        // 0x00197814: b 0x197828
    t0 = 5;                                                     // 0x00197818: addiu $t0, $zero, 5
label_0x19781c:
    goto label_0x197828;                                        // 0x0019781c: b 0x197828
    t0 = 6;                                                     // 0x00197820: addiu $t0, $zero, 6
label_0x197824:
    t0 = 7;                                                     // 0x00197824: addiu $t0, $zero, 7
label_0x197828:
    v1 = a0 & 0x7000;                                           // 0x00197828: andi $v1, $a0, 0x7000
    v0 = 0x6000;                                                // 0x0019782c: addiu $v0, $zero, 0x6000
    if (v1 == v0) goto label_0x1978a0;                          // 0x00197830: beq $v1, $v0, 0x1978a0
    v0 = 0x4000;                                                // 0x00197834: addiu $v0, $zero, 0x4000
    if (v1 == v0) goto label_0x1978a0;                          // 0x00197838: beq $v1, $v0, 0x1978a0
    /* nop */                                                   // 0x0019783c: nop 
    v0 = 0x5000;                                                // 0x00197840: addiu $v0, $zero, 0x5000
    if (v1 == v0) goto label_0x1978a0;                          // 0x00197844: beq $v1, $v0, 0x1978a0
    v0 = 0x2000;                                                // 0x00197848: addiu $v0, $zero, 0x2000
    if (v1 == v0) goto label_0x1978a0;                          // 0x0019784c: beq $v1, $v0, 0x1978a0
    /* nop */                                                   // 0x00197850: nop 
    if (v1 == 0) goto label_0x197898;                           // 0x00197854: beqz $v1, 0x197898
    v0 = 0x7000;                                                // 0x00197858: addiu $v0, $zero, 0x7000
    if (v1 == v0) goto label_0x197890;                          // 0x0019785c: beq $v1, $v0, 0x197890
    /* nop */                                                   // 0x00197860: nop 
    v0 = 0x3000;                                                // 0x00197864: addiu $v0, $zero, 0x3000
    if (v1 == v0) goto label_0x197888;                          // 0x00197868: beq $v1, $v0, 0x197888
    v0 = 0x1000;                                                // 0x0019786c: addiu $v0, $zero, 0x1000
    if (v1 == v0) goto label_0x197880;                          // 0x00197870: beq $v1, $v0, 0x197880
    /* nop */                                                   // 0x00197874: nop 
    goto label_0x1978a8;                                        // 0x00197878: b 0x1978a8
label_0x197880:
    goto label_0x1978a4;                                        // 0x00197880: b 0x1978a4
    a2 = 3;                                                     // 0x00197884: addiu $a2, $zero, 3
label_0x197888:
    goto label_0x1978a4;                                        // 0x00197888: b 0x1978a4
    a2 = 2;                                                     // 0x0019788c: addiu $a2, $zero, 2
label_0x197890:
    goto label_0x1978a4;                                        // 0x00197890: b 0x1978a4
    a2 = 1;                                                     // 0x00197894: addiu $a2, $zero, 1
label_0x197898:
    goto label_0x1978a4;                                        // 0x00197898: b 0x1978a4
label_0x1978a0:
    a2 = 1;                                                     // 0x001978a0: addiu $a2, $zero, 1
label_0x1978a4:
label_0x1978a8:
    v1 = v0 | 1;                                                // 0x001978bc: ori $v1, $v0, 1
    a1 = a0 | v1;                                               // 0x001978c4: or $a1, $a0, $v1
    a0 = 1 << 16;                                               // 0x001978cc: lui $a0, 1
    a0 = a1 | a0;                                               // 0x001978d4: or $a0, $a1, $a0
    v0 = 2;                                                     // 0x001978d8: addiu $v0, $zero, 2
    if (s1 == v0) goto label_0x1978f8;                          // 0x001978dc: beq $s1, $v0, 0x1978f8
    s0 = v1 | a0;                                               // 0x001978e0: or $s0, $v1, $a0
    a0 = 0x30;                                                  // 0x001978e4: addiu $a0, $zero, 0x30
    func_0018dc30();  // 18dc30                                // 0x001978e8: jal 0x18dc30
    a1 = 0x10;                                                  // 0x001978ec: addiu $a1, $zero, 0x10
    goto label_0x197908;                                        // 0x001978f0: b 0x197908
    a3 = 2;                                                     // 0x001978f4: addiu $a3, $zero, 2
label_0x1978f8:
    a0 = 0x40;                                                  // 0x001978f8: addiu $a0, $zero, 0x40
    func_0018dc30();  // 18dc30                                // 0x001978fc: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00197900: addiu $a1, $zero, 0x10
    a3 = 3;                                                     // 0x00197904: addiu $a3, $zero, 3
label_0x197908:
    a0 = 0x7000 << 16;                                          // 0x00197908: lui $a0, 0x7000
    v1 = 0x8000 << 16;                                          // 0x0019790c: lui $v1, 0x8000
    a0 = a3 + a0;                                               // 0x00197910: addu $a0, $a3, $a0
    a1 = 0x1300 << 16;                                          // 0x00197914: lui $a1, 0x1300
    a0 = a0 | v1;                                               // 0x00197918: or $a0, $a0, $v1
    v1 = 0x5000 << 16;                                          // 0x00197920: lui $v1, 0x5000
    a0 = a3 | v1;                                               // 0x00197928: or $a0, $a3, $v1
    v1 = a3 + -1;                                               // 0x00197930: addiu $v1, $a3, -1
    g_00080008 = a1;  // Global at 0x00080008                   // 0x00197934: sw $a1, 8($v0)
    g_0008000c = a0;  // Global at 0x0008000c                   // 0x0019793c: sw $a0, 0xc($v0)
    v1 = 0x1000 << 16;                                          // 0x00197940: lui $v1, 0x1000
    v1 = 0 | 0x8000;                                            // 0x0019794c: ori $v1, $zero, 0x8000
    v1 = v1 | a0;                                               // 0x00197950: or $v1, $v1, $a0
    a1 = a1 | v1;                                               // 0x00197954: or $a1, $a1, $v1
    a0 = 0xe;                                                   // 0x00197958: addiu $a0, $zero, 0xe
    v1 = 2;                                                     // 0x00197960: addiu $v1, $zero, 2
    if (s1 == v1) goto label_0x1979b0;                          // 0x00197964: beq $s1, $v1, 0x1979b0
    v1 = 1;                                                     // 0x0019796c: addiu $v1, $zero, 1
    if (s1 == v1) goto label_0x19799c;                          // 0x00197970: beq $s1, $v1, 0x19799c
    at = 0x29 << 16;                                            // 0x00197974: lui $at, 0x29
    if (s1 == 0) goto label_0x197988;                           // 0x00197978: beqz $s1, 0x197988
    at = 0x29 << 16;                                            // 0x0019797c: lui $at, 0x29
    goto label_0x1979dc;                                        // 0x00197980: b 0x1979dc
label_0x197988:
    v1 = 0x47;                                                  // 0x00197988: addiu $v1, $zero, 0x47
    goto label_0x1979d8;                                        // 0x00197994: b 0x1979d8
label_0x19799c:
    v1 = 0x48;                                                  // 0x0019799c: addiu $v1, $zero, 0x48
    goto label_0x1979d8;                                        // 0x001979a8: b 0x1979d8
label_0x1979b0:
    at = 0x29 << 16;                                            // 0x001979b0: lui $at, 0x29
    a0 = 0x47;                                                  // 0x001979b4: addiu $a0, $zero, 0x47
    v1 = 0x48;                                                  // 0x001979bc: addiu $v1, $zero, 0x48
    at = 0x29 << 16;                                            // 0x001979c0: lui $at, 0x29
label_0x1979d8:
label_0x1979dc:
    a3 = 0x29 << 16;                                            // 0x001979dc: lui $a3, 0x29
    func_0018ce40();  // 18ce40                                // 0x001979ec: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x001979f0: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x001979f8: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001979fc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00197a00: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00197a04: jr $ra
    sp = sp + 0x30;                                             // 0x00197a08: addiu $sp, $sp, 0x30
}