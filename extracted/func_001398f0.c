void func_001398f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001398f0: addiu $sp, $sp, -0x10
    if (a3 != 0) goto label_0x139918;                           // 0x001398f8: bnez $a3, 0x139918
    a1 = 0x22 << 16;                                            // 0x00139900: lui $a1, 0x22
    func_001392b8();  // 1392b8                                // 0x00139904: jal 0x1392b8
    a1 = &str_00225468;  // "E0092913:nsct < 0.(dvCiReqRd)"     // 0x00139908: addiu $a1, $a1, 0x5468
    goto label_0x139978;                                        // 0x0013990c: b 0x139978
    /* nop */                                                   // 0x00139914: nop 
label_0x139918:
    if (a2 != 0) goto label_0x139928;                           // 0x00139918: bnez $a2, 0x139928
    v0 = 2;                                                     // 0x0013991c: addiu $v0, $zero, 2
    goto label_0x139958;                                        // 0x00139920: b 0x139958
    *(uint32_t*)((a3) + 0xc) = a1;                              // 0x00139924: sw $a1, 0xc($a3)
label_0x139928:
    if (a2 != v0) goto label_0x139940;                          // 0x00139928: bne $a2, $v0, 0x139940
    v0 = 1;                                                     // 0x0013992c: addiu $v0, $zero, 1
    a0 = *(int32_t*)((a3) + 8);                                 // 0x00139930: lw $a0, 8($a3)
    v0 = a0 + a1;                                               // 0x00139934: addu $v0, $a0, $a1
    goto label_0x13995c;                                        // 0x00139938: b 0x13995c
    *(uint32_t*)((a3) + 0xc) = v0;                              // 0x0013993c: sw $v0, 0xc($a3)
label_0x139940:
    if (a2 != v0) goto label_0x13995c;                          // 0x00139940: bne $a2, $v0, 0x13995c
    a0 = *(int32_t*)((a3) + 8);                                 // 0x00139944: lw $a0, 8($a3)
    v0 = *(int32_t*)((a3) + 0xc);                               // 0x00139948: lw $v0, 0xc($a3)
    v0 = v0 + a1;                                               // 0x0013994c: addu $v0, $v0, $a1
    goto label_0x13995c;                                        // 0x00139950: b 0x13995c
    *(uint32_t*)((a3) + 0xc) = v0;                              // 0x00139954: sw $v0, 0xc($a3)
label_0x139958:
    a0 = *(int32_t*)((a3) + 8);                                 // 0x00139958: lw $a0, 8($a3)
label_0x13995c:
    v0 = *(int32_t*)((a3) + 0xc);                               // 0x0013995c: lw $v0, 0xc($a3)
    *(uint32_t*)((a3) + 0x14) = 0;                              // 0x00139960: sw $zero, 0x14($a3)
    v1 = (v0 < a0) ? 1 : 0;                                     // 0x00139964: slt $v1, $v0, $a0
    if (v1 == 0) v0 = a0;                                       // 0x00139968: movz $v0, $a0, $v1
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0013996c: slti $a0, $v0, 0
    if (a0 != 0) v0 = 0;                                        // 0x00139970: movn $v0, $zero, $a0
    *(uint32_t*)((a3) + 0xc) = v0;                              // 0x00139974: sw $v0, 0xc($a3)
label_0x139978:
    return;                                                     // 0x0013997c: jr $ra
    sp = sp + 0x10;                                             // 0x00139980: addiu $sp, $sp, 0x10
}