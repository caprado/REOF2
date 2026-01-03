void func_001a9960() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x120;                                           // 0x001a9960: addiu $sp, $sp, -0x120
    a0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9970: lw $a0, -0x63e8($gp)
    if (a0 == 0) goto label_0x1a9b0c;                           // 0x001a9974: beqz $a0, 0x1a9b0c
    /* nop */                                                   // 0x001a9978: nop 
    v1 = *(int32_t*)((a0) + 8);                                 // 0x001a997c: lw $v1, 8($a0)
    if (v1 == 0) goto label_0x1a9994;                           // 0x001a9980: beqz $v1, 0x1a9994
    a1 = a0 + 8;                                                // 0x001a9984: addiu $a1, $a0, 8
    v1 = *(int32_t*)((a0) + 0x1c);                              // 0x001a9988: lw $v1, 0x1c($a0)
    if (v1 == s0) goto label_0x1a9b0c;                          // 0x001a998c: beq $v1, $s0, 0x1a9b0c
    /* nop */                                                   // 0x001a9990: nop 
label_0x1a9994:
    at = 0x31 << 16;                                            // 0x001a9994: lui $at, 0x31
    v0 = g_00313838;  // Global at 0x00313838                   // 0x001a9998: lw $v0, 0x3838($at)
    if (v0 != 0) goto label_0x1a99c0;                           // 0x001a999c: bnez $v0, 0x1a99c0
    /* nop */                                                   // 0x001a99a0: nop 
label_0x1a99a4:
    /* nop */                                                   // 0x001a99a4: nop 
    /* nop */                                                   // 0x001a99a8: nop 
    /* nop */                                                   // 0x001a99ac: nop 
    /* nop */                                                   // 0x001a99b0: nop 
    /* nop */                                                   // 0x001a99b4: nop 
    goto label_0x1a99a4;                                        // 0x001a99b8: b 0x1a99a4
    /* nop */                                                   // 0x001a99bc: nop 
label_0x1a99c0:
    str_00235838 = v0;  // Global at 0x00235838                 // 0x001a99c0: sw $v0, 0($a1)
    at = 0x31 << 16;                                            // 0x001a99c4: lui $at, 0x31
    a0 = g_00313838;  // Global at 0x00313838                   // 0x001a99c8: lw $a0, 0x3838($at)
    v0 = 0 | 0xffff;                                            // 0x001a99cc: ori $v0, $zero, 0xffff
    v1 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a99d0: lw $v1, -0x63e8($gp)
    a0 = a0 + 0x6000;                                           // 0x001a99d4: addiu $a0, $a0, 0x6000
    if (s0 != v0) goto label_0x1a99f8;                          // 0x001a99d8: bne $s0, $v0, 0x1a99f8
    *(uint32_t*)((v1) + 0xc) = a0;                              // 0x001a99dc: sw $a0, 0xc($v1)
    a1 = 0x23 << 16;                                            // 0x001a99e0: lui $a1, 0x23
    a0 = sp + 0x20;                                             // 0x001a99e4: addiu $a0, $sp, 0x20
    func_0010ac68();  // 10ac68                                // 0x001a99e8: jal 0x10ac68
    a1 = &str_002357f0;  // "%sr%03d/r%03d.afs"                 // 0x001a99ec: addiu $a1, $a1, 0x57f0
    goto label_0x1a9a1c;                                        // 0x001a99f0: b 0x1a9a1c
    a1 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a99f4: lw $a1, -0x63e8($gp)
label_0x1a99f8:
    a1 = 0x23 << 16;                                            // 0x001a99f8: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001a99fc: lui $a2, 0x23
    a0 = sp + 0x20;                                             // 0x001a9a00: addiu $a0, $sp, 0x20
    a1 = &str_00235800;  // "scenario/"                         // 0x001a9a04: addiu $a1, $a1, 0x5800
    a2 = &str_00235818;  // "RFFF_H.BIN"                        // 0x001a9a08: addiu $a2, $a2, 0x5818
    func_0010a4d8();  // 10a4d8                                // 0x001a9a10: jal 0x10a4d8
    a1 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9a18: lw $a1, -0x63e8($gp)
label_0x1a9a1c:
    a0 = sp + 0x20;                                             // 0x001a9a1c: addiu $a0, $sp, 0x20
    func_001a94a0();  // 1a94a0                                // 0x001a9a20: jal 0x1a94a0
    a2 = 0x6000;                                                // 0x001a9a24: addiu $a2, $zero, 0x6000
    v1 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9a28: lw $v1, -0x63e8($gp)
    v0 = 0 | 0xffff;                                            // 0x001a9a2c: ori $v0, $zero, 0xffff
    if (s0 != v0) goto label_0x1a9a54;                          // 0x001a9a30: bne $s0, $v0, 0x1a9a54
    *(uint32_t*)((v1) + 0x1c) = s0;                             // 0x001a9a34: sw $s0, 0x1c($v1)
    a1 = 0x23 << 16;                                            // 0x001a9a38: lui $a1, 0x23
    a0 = sp + 0x20;                                             // 0x001a9a40: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001a9a44: jal 0x10a4d8
    a1 = &str_00235828;  // "R%03d_H.BIN"                       // 0x001a9a48: addiu $a1, $a1, 0x5828
    goto label_0x1a9a6c;                                        // 0x001a9a4c: b 0x1a9a6c
    a0 = sp + 0x20;                                             // 0x001a9a50: addiu $a0, $sp, 0x20
label_0x1a9a54:
    a1 = 0x23 << 16;                                            // 0x001a9a54: lui $a1, 0x23
    a0 = sp + 0x20;                                             // 0x001a9a5c: addiu $a0, $sp, 0x20
    func_0010a4d8();  // 10a4d8                                // 0x001a9a60: jal 0x10a4d8
    a1 = &str_00235838;  // "R%03d%02d%02d.NBD"                 // 0x001a9a64: addiu $a1, $a1, 0x5838
    a0 = sp + 0x20;                                             // 0x001a9a68: addiu $a0, $sp, 0x20
label_0x1a9a6c:
    func_001a91f0();  // 1a91f0                                // 0x001a9a6c: jal 0x1a91f0
    /* nop */                                                   // 0x001a9a70: nop 
    if (s0 < 0) goto label_0x1a9b0c;                            // 0x001a9a78: bltz $s0, 0x1a9b0c
    /* nop */                                                   // 0x001a9a7c: nop 
label_0x1a9a80:
    a0 = 0xa;                                                   // 0x001a9a80: addiu $a0, $zero, 0xa
    func_00128f00();  // 128f00                                // 0x001a9a84: jal 0x128f00
    *(uint32_t*)((gp) + -0x63e4) = v0;                          // 0x001a9a8c: sw $v0, -0x63e4($gp)
    /* nop */                                                   // 0x001a9a90: nop 
    if (v0 == 0) goto label_0x1a9a80;                           // 0x001a9a94: beqz $v0, 0x1a9a80
    /* nop */                                                   // 0x001a9a98: nop 
    func_001298c8();  // 1298c8                                // 0x001a9a9c: jal 0x1298c8
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9aa0: lw $a0, -0x63e4($gp)
    v0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9aa8: lw $v0, -0x63e8($gp)
    a2 = *(int32_t*)((v0) + 0xc);                               // 0x001a9aac: lw $a2, 0xc($v0)
    func_00129460();  // 129460                                // 0x001a9ab0: jal 0x129460
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9ab4: lw $a0, -0x63e4($gp)
label_0x1a9ab8:
    func_00129a08();  // 129a08                                // 0x001a9ab8: jal 0x129a08
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9abc: lw $a0, -0x63e4($gp)
    v1 = 3;                                                     // 0x001a9ac0: addiu $v1, $zero, 3
    /* nop */                                                   // 0x001a9ac4: nop 
    /* nop */                                                   // 0x001a9ac8: nop 
    if (v0 != v1) goto label_0x1a9ab8;                          // 0x001a9acc: bne $v0, $v1, 0x1a9ab8
    /* nop */                                                   // 0x001a9ad0: nop 
    func_00129010();  // 129010                                // 0x001a9ad4: jal 0x129010
    a0 = *(int32_t*)((gp) + -0x63e4);                           // 0x001a9ad8: lw $a0, -0x63e4($gp)
    a0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9adc: lw $a0, -0x63e8($gp)
    *(uint32_t*)((gp) + -0x63e4) = 0;                           // 0x001a9ae0: sw $zero, -0x63e4($gp)
    a1 = *(int32_t*)((a0) + 0xc);                               // 0x001a9ae4: lw $a1, 0xc($a0)
    v1 = str_00235838;  // "R%03d%02d%02d.NBD"                  // 0x001a9ae8: lw $v1, 0($a1)
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001a9aec: sw $v1, 0x18($a0)
    a0 = g_0023583c;  // Global at 0x0023583c                   // 0x001a9af0: lw $a0, 4($a1)
    v1 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9af4: lw $v1, -0x63e8($gp)
    *(uint32_t*)((v1) + 0x14) = a0;                             // 0x001a9af8: sw $a0, 0x14($v1)
    a0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9afc: lw $a0, -0x63e8($gp)
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x001a9b00: lw $v1, 0xc($a0)
    v1 = v1 + 8;                                                // 0x001a9b04: addiu $v1, $v1, 8
    *(uint32_t*)((a0) + 0xc) = v1;                              // 0x001a9b08: sw $v1, 0xc($a0)
label_0x1a9b0c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9b10: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a9b14: jr $ra
    sp = sp + 0x120;                                            // 0x001a9b18: addiu $sp, $sp, 0x120
}