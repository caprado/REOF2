void func_001129c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x70;                                            // 0x001129c8: addiu $sp, $sp, -0x70
    a2 = a2 << 0x10;                                            // 0x001129cc: sll $a2, $a2, 0x10
    a1 = a1 << 0x10;                                            // 0x001129d4: sll $a1, $a1, 0x10
    s2 = a2 >> 0x10;                                            // 0x001129d8: sra $s2, $a2, 0x10
    v0 = s2 + 0x3f;                                             // 0x001129e0: addiu $v0, $s2, 0x3f
    s4 = a1 >> 0x10;                                            // 0x001129e4: sra $s4, $a1, 0x10
    v0 = v0 >> 6;                                               // 0x001129e8: sra $v0, $v0, 6
    v1 = s4 & 0xf;                                              // 0x001129ec: andi $v1, $s4, 0xf
    v0 = v0 & 0x3f;                                             // 0x001129f0: andi $v0, $v0, 0x3f
    v0 = v0 | v1;                                               // 0x00112a04: or $v0, $v0, $v1
    a3 = a3 << 0x10;                                            // 0x00112a0c: sll $a3, $a3, 0x10
    t0 = t0 << 0x10;                                            // 0x00112a14: sll $t0, $t0, 0x10
    t1 = t1 << 0x10;                                            // 0x00112a1c: sll $t1, $t1, 0x10
    v1 = 0x4c;                                                  // 0x00112a24: addiu $v1, $zero, 0x4c
    a0 = 0x4e;                                                  // 0x00112a28: addiu $a0, $zero, 0x4e
    s1 = a3 >> 0x10;                                            // 0x00112a2c: sra $s1, $a3, 0x10
    s5 = t0 >> 0x10;                                            // 0x00112a30: sra $s5, $t0, 0x10
    s3 = t1 >> 0x10;                                            // 0x00112a34: sra $s3, $t1, 0x10
    if (s5 != 0) goto label_0x112a7c;                           // 0x00112a40: bnez $s5, 0x112a7c
    func_00112900();  // 112900                                // 0x00112a50: jal 0x112900
    v1 = s3 & 0xf;                                              // 0x00112a5c: andi $v1, $s3, 0xf
    v0 = v0 | v1;                                               // 0x00112a68: or $v0, $v0, $v1
    a0 = 0 | 0x8000;                                            // 0x00112a6c: ori $a0, $zero, 0x8000
    goto label_0x112aa0;                                        // 0x00112a74: b 0x112aa0
    v0 = v0 | a0;                                               // 0x00112a78: or $v0, $v0, $a0
label_0x112a7c:
    func_00112900();  // 112900                                // 0x00112a84: jal 0x112900
    v1 = s3 & 0xf;                                              // 0x00112a90: andi $v1, $s3, 0xf
    v0 = v0 | v1;                                               // 0x00112a9c: or $v0, $v0, $v1
label_0x112aa0:
    v0 = s1 >> 1;                                               // 0x00112aa4: sra $v0, $s1, 1
    v1 = s2 >> 1;                                               // 0x00112aa8: sra $v1, $s2, 1
    a0 = 0x800;                                                 // 0x00112ab0: addiu $a0, $zero, 0x800
    a2 = s2 + -1;                                               // 0x00112acc: addiu $a2, $s2, -1
    a1 = s1 + -1;                                               // 0x00112ad0: addiu $a1, $s1, -1
    a0 = a0 | v0;                                               // 0x00112ae4: or $a0, $a0, $v0
    t3 = 1;                                                     // 0x00112aec: addiu $t3, $zero, 1
    a2 = a2 | a1;                                               // 0x00112af0: or $a2, $a2, $a1
    v0 = 0x18;                                                  // 0x00112af4: addiu $v0, $zero, 0x18
    v1 = v1 | t3;                                               // 0x00112af8: or $v1, $v1, $t3
    a3 = a3 | t3;                                               // 0x00112afc: or $a3, $a3, $t3
    a1 = 0x40;                                                  // 0x00112b00: addiu $a1, $zero, 0x40
    t0 = 0x1a;                                                  // 0x00112b04: addiu $t0, $zero, 0x1a
    t1 = 0x46;                                                  // 0x00112b08: addiu $t1, $zero, 0x46
    t2 = 0x45;                                                  // 0x00112b0c: addiu $t2, $zero, 0x45
    v0 = s4 & 2;                                                // 0x00112b18: andi $v0, $s4, 2
    if (v0 == 0) goto label_0x112b48;                           // 0x00112b34: beqz $v0, 0x112b48
    goto label_0x112b54;                                        // 0x00112b40: b 0x112b54
    v0 = v0 | t3;                                               // 0x00112b44: or $v0, $v0, $t3
label_0x112b48:
    v1 = -2;                                                    // 0x00112b4c: addiu $v1, $zero, -2
    v0 = v0 & v1;                                               // 0x00112b50: and $v0, $v0, $v1
label_0x112b54:
    v0 = 0x47;                                                  // 0x00112b58: addiu $v0, $zero, 0x47
    if (s5 == 0) goto label_0x112b78;                           // 0x00112b5c: beqz $s5, 0x112b78
    v0 = s5 & 3;                                                // 0x00112b64: andi $v0, $s5, 3
    v1 = 1 << 16;                                               // 0x00112b68: lui $v1, 1
    goto label_0x112b7c;                                        // 0x00112b70: b 0x112b7c
    v0 = v0 | v1;                                               // 0x00112b74: or $v0, $v0, $v1
label_0x112b78:
    v0 = 3 << 16;                                               // 0x00112b78: lui $v0, 3
label_0x112b7c:
    /* memory sync */                                           // 0x00112b80: sync 
    v0 = 8;                                                     // 0x00112b88: addiu $v0, $zero, 8
    return;                                                     // 0x00112ba4: jr $ra
    sp = sp + 0x70;                                             // 0x00112ba8: addiu $sp, $sp, 0x70
}