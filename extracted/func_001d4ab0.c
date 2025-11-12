void func_001d4ab0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x350;                                           // 0x001d4ab0: addiu $sp, $sp, -0x350
    v1 = -1;                                                    // 0x001d4ab4: addiu $v1, $zero, -1
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d4abc: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d4ac8: addu.qb $zero, $sp, $s1
    if (s3 != v1) goto label_0x1d4ae0;                          // 0x001d4acc: bne $s3, $v1, 0x1d4ae0
    s3 = *(int32_t*)((gp) + -0x7ae4);                           // 0x001d4ad4: lw $s3, -0x7ae4($gp)
    if (s3 == v1) goto label_0x1d4c5c;                          // 0x001d4ad8: beq $s3, $v1, 0x1d4c5c
    /* nop */                                                   // 0x001d4adc: nop 
label_0x1d4ae0:
    func_001d4a40();  // 0x1d4140                                // 0x001d4aec: jal 0x1d4140
    if (s0 == 0) goto label_0x1d4c5c;                           // 0x001d4af8: beqz $s0, 0x1d4c5c
    func_0010af38();  // 0x10ae00                                // 0x001d4b00: jal 0x10ae00
    /* nop */                                                   // 0x001d4b04: nop 
    if (v0 == 0) goto label_0x1d4c5c;                           // 0x001d4b08: beqz $v0, 0x1d4c5c
    a0 = sp + 0x250;                                            // 0x001d4b0c: addiu $a0, $sp, 0x250
    func_0010ae00();  // 0x10ac68                                // 0x001d4b10: jal 0x10ac68
    a0 = sp + 0x250;                                            // 0x001d4b18: addiu $a0, $sp, 0x250
    func_0010b4b0();  // 0x10b460                                // 0x001d4b1c: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001d4b20: addiu $a1, $zero, 0x5c
    *(uint8_t*)((v0) + 1) = 0;                                  // 0x001d4b28: sb $zero, 1($v0)
    s0 = *(int32_t*)((gp) + -0x6230);                           // 0x001d4b2c: lw $s0, -0x6230($gp)
    a2 = 1;                                                     // 0x001d4b30: addiu $a2, $zero, 1
    func_001d33e0();  // 0x1d3390                                // 0x001d4b38: jal 0x1d3390
    if (s2 == 0) goto label_0x1d4c5c;                           // 0x001d4b44: beqz $s2, 0x1d4c5c
    a0 = sp + 0x150;                                            // 0x001d4b4c: addiu $a0, $sp, 0x150
label_0x1d4b50:
    func_0010ae00();  // 0x10ac68                                // 0x001d4b50: jal 0x10ac68
    a1 = sp + 0x250;                                            // 0x001d4b54: addiu $a1, $sp, 0x250
    a0 = sp + 0x50;                                             // 0x001d4b58: addiu $a0, $sp, 0x50
    goto label_0x1d4b7c;                                        // 0x001d4b5c: b 0x1d4b7c
    v1 = 0xa;                                                   // 0x001d4b60: addiu $v1, $zero, 0xa
label_0x1d4b64:
    s1 = s1 + 1;                                                // 0x001d4b64: addiu $s1, $s1, 1
    *(uint8_t*)(a0) = a1;                                       // 0x001d4b68: sb $a1, 0($a0)
    at = (s1 < s2) ? 1 : 0;                                     // 0x001d4b6c: slt $at, $s1, $s2
    s0 = s0 + 1;                                                // 0x001d4b70: addiu $s0, $s0, 1
    if (at == 0) goto label_0x1d4c5c;                           // 0x001d4b74: beqz $at, 0x1d4c5c
    a0 = a0 + 1;                                                // 0x001d4b78: addiu $a0, $a0, 1
label_0x1d4b7c:
    a1 = *(int8_t*)(s0);                                        // 0x001d4b7c: lb $a1, 0($s0)
    if (a1 == v1) goto label_0x1d4b90;                          // 0x001d4b80: beq $a1, $v1, 0x1d4b90
    /* nop */                                                   // 0x001d4b84: nop 
    if (a1 != 0) goto label_0x1d4b64;                           // 0x001d4b88: bnez $a1, 0x1d4b64
    /* nop */                                                   // 0x001d4b8c: nop 
label_0x1d4b90:
    *(uint8_t*)(a0) = 0;                                        // 0x001d4b90: sb $zero, 0($a0)
    a1 = 0x2e;                                                  // 0x001d4b94: addiu $a1, $zero, 0x2e
    a0 = sp + 0x50;                                             // 0x001d4b98: addiu $a0, $sp, 0x50
    s0 = s0 + 1;                                                // 0x001d4b9c: addiu $s0, $s0, 1
    func_0010b4b0();  // 0x10b460                                // 0x001d4ba0: jal 0x10b460
    s1 = s1 + 1;                                                // 0x001d4ba4: addiu $s1, $s1, 1
    if (v0 != 0) goto label_0x1d4bc8;                           // 0x001d4ba8: bnez $v0, 0x1d4bc8
    a0 = sp + 0x50;                                             // 0x001d4bac: addiu $a0, $sp, 0x50
    func_0010b4b0();  // 0x10b460                                // 0x001d4bb0: jal 0x10b460
    a1 = 0x2c;                                                  // 0x001d4bb4: addiu $a1, $zero, 0x2c
    if (v0 == 0) goto label_0x1d4bd0;                           // 0x001d4bb8: beqz $v0, 0x1d4bd0
    a0 = sp + 0x50;                                             // 0x001d4bbc: addiu $a0, $sp, 0x50
    goto label_0x1d4bcc;                                        // 0x001d4bc0: b 0x1d4bcc
    *(uint8_t*)(v0) = 0;                                        // 0x001d4bc4: sb $zero, 0($v0)
label_0x1d4bc8:
    *(uint8_t*)(v0) = 0;                                        // 0x001d4bc8: sb $zero, 0($v0)
label_0x1d4bcc:
    a0 = sp + 0x50;                                             // 0x001d4bcc: addiu $a0, $sp, 0x50
label_0x1d4bd0:
    func_0010af38();  // 0x10ae00                                // 0x001d4bd0: jal 0x10ae00
    /* nop */                                                   // 0x001d4bd4: nop 
    if (v0 == 0) goto label_0x1d4c5c;                           // 0x001d4bd8: beqz $v0, 0x1d4c5c
    a0 = sp + 0x50;                                             // 0x001d4bdc: addiu $a0, $sp, 0x50
    func_0010b4b0();  // 0x10b460                                // 0x001d4be0: jal 0x10b460
    a1 = 0x2f;                                                  // 0x001d4be4: addiu $a1, $zero, 0x2f
    if (v0 == 0) goto label_0x1d4c04;                           // 0x001d4be8: beqz $v0, 0x1d4c04
    a0 = sp + 0x150;                                            // 0x001d4bec: addiu $a0, $sp, 0x150
    a1 = v0 + 1;                                                // 0x001d4bf0: addiu $a1, $v0, 1
    func_0010a990();  // 0x10a860                                // 0x001d4bf4: jal 0x10a860
    a0 = sp + 0x150;                                            // 0x001d4bf8: addiu $a0, $sp, 0x150
    goto label_0x1d4c0c;                                        // 0x001d4bfc: b 0x1d4c0c
    /* nop */                                                   // 0x001d4c00: nop 
label_0x1d4c04:
    func_0010a990();  // 0x10a860                                // 0x001d4c04: jal 0x10a860
    a1 = sp + 0x50;                                             // 0x001d4c08: addiu $a1, $sp, 0x50
label_0x1d4c0c:
    a1 = 0x24 << 16;                                            // 0x001d4c0c: lui $a1, 0x24
    a0 = sp + 0x150;                                            // 0x001d4c10: addiu $a0, $sp, 0x150
    func_0010a990();  // 0x10a860                                // 0x001d4c14: jal 0x10a860
    a1 = a1 + 0x7370;                                           // 0x001d4c18: addiu $a1, $a1, 0x7370
    func_001d4ab0();  // 0x1d4a40                                // 0x001d4c1c: jal 0x1d4a40
    a0 = sp + 0x150;                                            // 0x001d4c20: addiu $a0, $sp, 0x150
    if (v0 >= 0) goto label_0x1d4c44;                           // 0x001d4c24: bgez $v0, 0x1d4c44
    a0 = 0xff0;                                                 // 0x001d4c28: addiu $a0, $zero, 0xff0
    a0 = sp + 0x150;                                            // 0x001d4c2c: addiu $a0, $sp, 0x150
    func_001d3a30();  // 0x1d3800                                // 0x001d4c34: jal 0x1d3800
    a2 = 1;                                                     // 0x001d4c38: addiu $a2, $zero, 1
    goto label_0x1d4c54;                                        // 0x001d4c3c: b 0x1d4c54
    s3 = s3 + 1;                                                // 0x001d4c40: addiu $s3, $s3, 1
label_0x1d4c44:
    func_001d3800();  // 0x1d3760                                // 0x001d4c48: jal 0x1d3760
    s3 = s3 + 1;                                                // 0x001d4c50: addiu $s3, $s3, 1
label_0x1d4c54:
    goto label_0x1d4b50;                                        // 0x001d4c54: b 0x1d4b50
    a0 = sp + 0x150;                                            // 0x001d4c58: addiu $a0, $sp, 0x150
label_0x1d4c5c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d4c64: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d4c68: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d4c6c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d4c70: jr $ra
    sp = sp + 0x350;                                            // 0x001d4c74: addiu $sp, $sp, 0x350
}