void func_0017bdc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_20, local_24, local_28, local_2c;
    uint32_t local_30, local_34, local_4, local_8, local_c;
    
    sp = sp + -0x10;                                            // 0x0017bdc0: addiu $sp, $sp, -0x10
    a2 = 0x10;                                                  // 0x0017bdcc: addiu $a2, $zero, 0x10
    goto label_0x17be20;                                        // 0x0017bdd4: j 0x17be20
    sp = sp + 0x10;                                             // 0x0017bdd8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017bddc: nop 
    sp = sp + -0x10;                                            // 0x0017bde0: addiu $sp, $sp, -0x10
    a2 = 0x18;                                                  // 0x0017bdec: addiu $a2, $zero, 0x18
    goto label_0x17be20;                                        // 0x0017bdf4: j 0x17be20
    sp = sp + 0x10;                                             // 0x0017bdf8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017bdfc: nop 
    sp = sp + -0x10;                                            // 0x0017be00: addiu $sp, $sp, -0x10
    a2 = 0x20;                                                  // 0x0017be0c: addiu $a2, $zero, 0x20
    goto label_0x17be20;                                        // 0x0017be14: j 0x17be20
    sp = sp + 0x10;                                             // 0x0017be18: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0017be1c: nop 
label_0x17be20:
    sp = sp + -0x30;                                            // 0x0017be20: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s0) + 4);                                 // 0x0017be48: lw $v0, 4($s0)
    if (v0 != 0) goto label_0x17be64;                           // 0x0017be4c: bnez $v0, 0x17be64
    a1 = 0x23 << 16;                                            // 0x0017be54: lui $a1, 0x23
    func_0017cad8();  // 17cad8                                // 0x0017be58: jal 0x17cad8
    a1 = &str_002296b0;  // "E201181: SFX_CnvFrmArgb8888 : frmfmt is not support." // 0x0017be5c: addiu $a1, $a1, -0x6950
    *(uint32_t*)((s0) + 4) = v0;                                // 0x0017be60: sw $v0, 4($s0)
label_0x17be64:
    func_0017e028();  // 17e028                                // 0x0017be64: jal 0x17e028
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x0017be68: lw $a0, 0x24($s0)
    a3 = 2;                                                     // 0x0017be6c: addiu $a3, $zero, 2
    a2 = 0x23 << 16;                                            // 0x0017be70: lui $a2, 0x23
    v1 = 1;                                                     // 0x0017be74: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x17bea8;                          // 0x0017be80: beq $v0, $v1, 0x17bea8
    a2 = &str_002298d8;  // "E201191: SFX_CnvFrmZcmn : frmfmt is not support." // 0x0017be84: addiu $a2, $a2, -0x6728
    return func_0017cec8();  // Tail call                        // 0x0017be9c: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017bea0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017bea4: nop 
label_0x17bea8:
    v1 = *(int32_t*)(s1);                                       // 0x0017bea8: lw $v1, 0($s1)
    if (v1 == a3) goto label_0x17bef8;                          // 0x0017beac: beq $v1, $a3, 0x17bef8
    v0 = ((unsigned)v1 < (unsigned)3) ? 1 : 0;                  // 0x0017beb0: sltiu $v0, $v1, 3
    if (v0 != 0) goto label_0x17bf28;                           // 0x0017beb4: bnez $v0, 0x17bf28
    v0 = 3;                                                     // 0x0017bebc: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x17bf2c;                          // 0x0017bec0: bnel $v1, $v0, 0x17bf2c
    goto label_0x17bf50;                                        // 0x0017beec: j 0x17bf50
    sp = sp + 0x30;                                             // 0x0017bef0: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017bef4: nop 
label_0x17bef8:
    return func_0017c1f0();  // Tail call                        // 0x0017bf1c: j 0x17c0e0
    sp = sp + 0x30;                                             // 0x0017bf20: addiu $sp, $sp, 0x30
    /* nop */                                                   // 0x0017bf24: nop 
label_0x17bf28:
label_0x17bf2c:
    a2 = 0x23 << 16;                                            // 0x0017bf34: lui $a2, 0x23
    a2 = &str_00229908;  // "E201313: sfxcnv_CnvZbitToCft : zbit is invalid." // 0x0017bf40: addiu $a2, $a2, -0x66f8
    return func_0017cec8();  // Tail call                        // 0x0017bf48: j 0x17ce88
    sp = sp + 0x30;                                             // 0x0017bf4c: addiu $sp, $sp, 0x30
label_0x17bf50:
    sp = sp + -0x80;                                            // 0x0017bf50: addiu $sp, $sp, -0x80
    s0 = s2 + 4;                                                // 0x0017bf74: addiu $s0, $s2, 4
    t2 = s2 + 0x14;                                             // 0x0017bf7c: addiu $t2, $s2, 0x14
    t3 = s2 + 0x24;                                             // 0x0017bf8c: addiu $t3, $s2, 0x24
    local_18 = 0;                                               // 0x0017bf94: sw $zero, 0x18($sp)
    a1 = *(int32_t*)((s0) + 8);                                 // 0x0017bf98: lw $a1, 8($s0)
    t4 = *(int32_t*)((s0) + 4);                                 // 0x0017bf9c: lw $t4, 4($s0)
    v0 = (unsigned)a1 >> 0x1f;                                  // 0x0017bfa0: srl $v0, $a1, 0x1f
    t0 = *(int32_t*)(t2);                                       // 0x0017bfa4: lw $t0, 0($t2)
    /* multiply: t4 * a1 -> hi:lo */                            // 0x0017bfa8: mult $ac3, $t4, $a1
    a1 = a1 + v0;                                               // 0x0017bfac: addu $a1, $a1, $v0
    t1 = *(int32_t*)(t3);                                       // 0x0017bfb0: lw $t1, 0($t3)
    a2 = *(int32_t*)(s0);                                       // 0x0017bfb8: lw $a2, 0($s0)
    s4 = a1 >> 1;                                               // 0x0017bfbc: sra $s4, $a1, 1
    t5 = *(int32_t*)((t2) + 4);                                 // 0x0017bfc0: lw $t5, 4($t2)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017bfc4: srl $v0, $v1, 0x1f
    a3 = *(int32_t*)((s1) + 8);                                 // 0x0017bfc8: lw $a3, 8($s1)
    v1 = v1 + v0;                                               // 0x0017bfcc: addu $v1, $v1, $v0
    t2 = *(int32_t*)((t3) + 4);                                 // 0x0017bfd0: lw $t2, 4($t3)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017bfd4: srl $v0, $v1, 0x1f
    v1 = v1 >> 1;                                               // 0x0017bfd8: sra $v1, $v1, 1
    v0 = v1 + v0;                                               // 0x0017bfdc: addu $v0, $v1, $v0
    t3 = *(int32_t*)((s1) + 0xc);                               // 0x0017bfe0: lw $t3, 0xc($s1)
    v0 = v0 >> 1;                                               // 0x0017bfe4: sra $v0, $v0, 1
    a2 = a2 + v1;                                               // 0x0017bfe8: addu $a2, $a2, $v1
    t1 = t1 + v0;                                               // 0x0017bfec: addu $t1, $t1, $v0
    t0 = t0 + v0;                                               // 0x0017bff0: addu $t0, $t0, $v0
    if (a3 != 0) s5 = a3;                                       // 0x0017bff4: movn $s5, $a3, $a3
    local_0 = a2;                                               // 0x0017bff8: sw $a2, 0($sp)
    local_4 = t0;                                               // 0x0017bffc: sw $t0, 4($sp)
    local_8 = t1;                                               // 0x0017c000: sw $t1, 8($sp)
    local_10 = t5;                                              // 0x0017c004: sw $t5, 0x10($sp)
    local_14 = t2;                                              // 0x0017c008: sw $t2, 0x14($sp)
    if (t3 == 0) goto label_0x17c018;                           // 0x0017c00c: beqz $t3, 0x17c018
    local_c = t4;                                               // 0x0017c010: sw $t4, 0xc($sp)
label_0x17c018:
    func_0017c1f0();  // 17c1f0                                // 0x0017c018: jal 0x17c1f0
    /* nop */                                                   // 0x0017c01c: nop 
    t2 = 0x20;                                                  // 0x0017c020: addiu $t2, $zero, 0x20
    v1 = *(int32_t*)((s0) + 8);                                 // 0x0017c024: lw $v1, 8($s0)
    t1 = 0x10;                                                  // 0x0017c028: addiu $t1, $zero, 0x10
    t0 = *(int32_t*)((s0) + 4);                                 // 0x0017c02c: lw $t0, 4($s0)
    a3 = (unsigned)v1 >> 0x1f;                                  // 0x0017c034: srl $a3, $v1, 0x1f
    a2 = 0xb;                                                   // 0x0017c038: addiu $a2, $zero, 0xb
    v1 = v1 + a3;                                               // 0x0017c03c: addu $v1, $v1, $a3
    v1 = v1 >> 1;                                               // 0x0017c044: sra $v1, $v1, 1
    local_20 = v0;                                              // 0x0017c048: sw $v0, 0x20($sp)
    local_30 = t0;                                              // 0x0017c04c: sw $t0, 0x30($sp)
    local_34 = v1;                                              // 0x0017c050: sw $v1, 0x34($sp)
    local_24 = s6;                                              // 0x0017c054: sw $s6, 0x24($sp)
    local_28 = s5;                                              // 0x0017c058: sw $s5, 0x28($sp)
    if (s3 == t1) goto label_0x17c078;                          // 0x0017c05c: beq $s3, $t1, 0x17c078
    local_2c = s4;                                              // 0x0017c060: sw $s4, 0x2c($sp)
    if (s3 == t2) goto label_0x17c098;                          // 0x0017c064: beq $s3, $t2, 0x17c098
    goto label_0x17c0bc;                                        // 0x0017c06c: b 0x17c0bc
    /* nop */                                                   // 0x0017c074: nop 
label_0x17c078:
    func_0017c250();  // 17c250                                // 0x0017c078: jal 0x17c250
    /* nop */                                                   // 0x0017c07c: nop 
    a2 = *(int32_t*)((s1) + 0x3c);                              // 0x0017c080: lw $a2, 0x3c($s1)
    func_00148f80();  // 148f80                                // 0x0017c088: jal 0x148f80
    a1 = sp + 0x20;                                             // 0x0017c08c: addiu $a1, $sp, 0x20
    goto label_0x17c0b8;                                        // 0x0017c090: b 0x17c0b8
label_0x17c098:
    a2 = 0xd;                                                   // 0x0017c098: addiu $a2, $zero, 0xd
    func_0017c250();  // 17c250                                // 0x0017c09c: jal 0x17c250
    a2 = *(int32_t*)((s1) + 0x3c);                              // 0x0017c0a4: lw $a2, 0x3c($s1)
    func_00148f88();  // 148f88                                // 0x0017c0ac: jal 0x148f88
    a1 = sp + 0x20;                                             // 0x0017c0b0: addiu $a1, $sp, 0x20
label_0x17c0b8:
label_0x17c0bc:
    return;                                                     // 0x0017c0d4: jr $ra
    sp = sp + 0x80;                                             // 0x0017c0d8: addiu $sp, $sp, 0x80
}