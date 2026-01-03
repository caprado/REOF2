void func_001158a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001158a8: addiu $sp, $sp, -0x80
    s5 = 0x25 << 16;                                            // 0x001158b4: lui $s5, 0x25
    s3 = s5 + -0x3cf0;                                          // 0x001158c4: addiu $s3, $s5, -0x3cf0
    v0 = g_0024c31c;  // Global at 0x0024c31c                   // 0x001158e4: lw $v0, 0xc($s3)
    if (v0 != 0) goto label_0x1159f4;                           // 0x001158e8: bnez $v0, 0x1159f4
    v0 = -1;                                                    // 0x001158ec: addiu $v0, $zero, -1
    func_0011d320();  // 11d320                                // 0x001158f0: jal 0x11d320
    /* nop */                                                   // 0x001158f4: nop 
    a0 = 0x2000 << 16;                                          // 0x001158fc: lui $a0, 0x2000
    v0 = 0x25 << 16;                                            // 0x00115900: lui $v0, 0x25
    v1 = 1;                                                     // 0x00115904: addiu $v1, $zero, 1
    v0 = v0 + -0x3cc0;                                          // 0x00115908: addiu $v0, $v0, -0x3cc0
    g_0024c31c = v1;  // Global at 0x0024c31c                   // 0x0011590c: sw $v1, 0xc($s3)
    a2 = v0 | a0;                                               // 0x00115910: or $a2, $v0, $a0
    t0 = -1;                                                    // 0x00115914: addiu $t0, $zero, -1
    g_0024c320 = a2;  // Global at 0x0024c320                   // 0x00115918: sw $a2, 0x10($s3)
    a3 = 0xa;                                                   // 0x0011591c: addiu $a3, $zero, 0xa
    a1 = 0xd;                                                   // 0x00115920: addiu $a1, $zero, 0xd
    a0 = a2 + 0xc;                                              // 0x00115924: addiu $a0, $a2, 0xc
label_0x115928:
    s2 = s2 + -1;                                               // 0x00115928: addiu $s2, $s2, -1
    if (s2 == t0) goto label_0x115978;                          // 0x0011592c: beql $s2, $t0, 0x115978
    s0 = s5 + -0x3cf0;                                          // 0x00115930: addiu $s0, $s5, -0x3cf0
    v0 = g_0024c310;  // Global at 0x0024c310                   // 0x00115934: lb $v0, 0($s0)
    if (v0 != a3) goto label_0x115958;                          // 0x00115938: bne $v0, $a3, 0x115958
    v1 = g_0024c310;  // Global at 0x0024c310                   // 0x0011593c: lbu $v1, 0($s0)
    g_20000000 = a1;  // Global at 0x20000000                   // 0x00115940: sb $a1, 0($a0)
    s1 = s1 + 1;                                                // 0x00115944: addiu $s1, $s1, 1
    v0 = (s1 < 0x100) ? 1 : 0;                                  // 0x00115948: slti $v0, $s1, 0x100
    if (v0 == 0) goto label_0x115974;                           // 0x0011594c: beqz $v0, 0x115974
    a0 = a0 + 1;                                                // 0x00115950: addiu $a0, $a0, 1
    v1 = g_0024c310;  // Global at 0x0024c310                   // 0x00115954: lbu $v1, 0($s0)
label_0x115958:
    g_20000001 = v1;  // Global at 0x20000001                   // 0x00115958: sb $v1, 0($a0)
    s1 = s1 + 1;                                                // 0x0011595c: addiu $s1, $s1, 1
    s0 = s0 + 1;                                                // 0x00115960: addiu $s0, $s0, 1
    a0 = a0 + 1;                                                // 0x00115964: addiu $a0, $a0, 1
    v0 = (s1 < 0x100) ? 1 : 0;                                  // 0x00115968: slti $v0, $s1, 0x100
    if (v0 != 0) goto label_0x115928;                           // 0x0011596c: bnez $v0, 0x115928
    s4 = s4 + 1;                                                // 0x00115970: addiu $s4, $s4, 1
label_0x115974:
    s0 = s5 + -0x3cf0;                                          // 0x00115974: addiu $s0, $s5, -0x3cf0
label_0x115978:
    v0 = s1 + 0xc;                                              // 0x00115978: addiu $v0, $s1, 0xc
    g_0024c314 = v0;  // Global at 0x0024c314                   // 0x0011597c: sw $v0, 4($s0)
    v1 = g_0024c314;  // Global at 0x0024c314                   // 0x00115980: lw $v1, 4($s0)
    a1 = *(int8_t*)((a2) + 7);                                  // 0x00115984: lb $a1, 7($a2)
    a0 = g_0024c310;  // Global at 0x0024c310                   // 0x00115988: lw $a0, -0x3cf0($s5)
    func_001154a0();  // 1154a0                                // 0x0011598c: jal 0x1154a0
    *(uint16_t*)(a2) = v1;                                      // 0x00115990: sh $v1, 0($a2)
    if (v0 >= 0) goto label_0x1159b8;                           // 0x00115994: bgez $v0, 0x1159b8
    /* nop */                                                   // 0x00115998: nop 
    g_0024c31c = 0;  // Global at 0x0024c31c                    // 0x0011599c: sw $zero, 0xc($s0)
    if (s6 == 0) goto label_0x1159f4;                           // 0x001159a0: beqz $s6, 0x1159f4
    v0 = -1;                                                    // 0x001159a4: addiu $v0, $zero, -1
    func_0011d378();  // 11d378                                // 0x001159a8: jal 0x11d378
    /* nop */                                                   // 0x001159ac: nop 
    goto label_0x1159f4;                                        // 0x001159b0: b 0x1159f4
    v0 = -1;                                                    // 0x001159b4: addiu $v0, $zero, -1
label_0x1159b8:
    v0 = g_0024c31c;  // Global at 0x0024c31c                   // 0x001159b8: lw $v0, 0xc($s0)
    if (v0 == 0) goto label_0x1159e0;                           // 0x001159bc: beqz $v0, 0x1159e0
    /* nop */                                                   // 0x001159c4: nop 
label_0x1159c8:
    a0 = *(int32_t*)((s1) + -0x3cf0);                           // 0x001159c8: lw $a0, -0x3cf0($s1)
    func_001154d0();  // 1154d0                                // 0x001159cc: jal 0x1154d0
    /* nop */                                                   // 0x001159d0: nop 
    v0 = g_0024c31c;  // Global at 0x0024c31c                   // 0x001159d4: lw $v0, 0xc($s0)
    if (v0 != 0) goto label_0x1159c8;                           // 0x001159d8: bnez $v0, 0x1159c8
    /* nop */                                                   // 0x001159dc: nop 
label_0x1159e0:
    if (s6 == 0) goto label_0x1159f4;                           // 0x001159e0: beqz $s6, 0x1159f4
    func_0011d378();  // 11d378                                // 0x001159e8: jal 0x11d378
    /* nop */                                                   // 0x001159ec: nop 
label_0x1159f4:
    return;                                                     // 0x00115a14: jr $ra
    sp = sp + 0x80;                                             // 0x00115a18: addiu $sp, $sp, 0x80
}