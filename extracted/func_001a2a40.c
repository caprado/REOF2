void func_001a2a40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x80;                                            // 0x001a2a40: addiu $sp, $sp, -0x80
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001a2a4c: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001a2a54: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a2a60: addu.qb $zero, $sp, $s1
    func_001a27b0();  // 0x1a2780                                // 0x001a2a74: jal 0x1a2780
    v0 = (s3 < v0) ? 1 : 0;                                     // 0x001a2a7c: slt $v0, $s3, $v0
    if (v0 != 0) goto label_0x1a2a90;                           // 0x001a2a80: bnez $v0, 0x1a2a90
    goto label_0x1a2c04;                                        // 0x001a2a88: b 0x1a2c04
label_0x1a2a90:
    func_001a2a40();  // 0x1a29e0                                // 0x001a2a90: jal 0x1a29e0
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x001a2a98: sw $v0, 0xc($s1)
    func_001a2830();  // 0x1a2800                                // 0x001a2aa0: jal 0x1a2800
    *(uint16_t*)((s1) + 2) = v0;                                // 0x001a2aa8: sh $v0, 2($s1)
    v0 = 0x10;                                                  // 0x001a2ab0: addiu $v0, $zero, 0x10
    s4 = s1 + 0x10;                                             // 0x001a2ab4: addiu $s4, $s1, 0x10
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001a2ab8: sw $v0, 4($s1)
    goto label_0x1a2af4;                                        // 0x001a2ac0: b 0x1a2af4
    *(uint32_t*)((s1) + 8) = 0;                                 // 0x001a2ac4: sw $zero, 8($s1)
label_0x1a2ac8:
    a0 = s4 + v0;                                               // 0x001a2acc: addu $a0, $s4, $v0
label_0x1a2ad0:
    v0 = a1 << 2;                                               // 0x001a2ad0: sll $v0, $a1, 2
    v1 = a0 + v0;                                               // 0x001a2ad4: addu $v1, $a0, $v0
    a1 = a1 + 1;                                                // 0x001a2ad8: addiu $a1, $a1, 1
    *(uint32_t*)((v1) + 0x10) = 0;                              // 0x001a2adc: sw $zero, 0x10($v1)
    v0 = (a1 < 4) ? 1 : 0;                                      // 0x001a2ae0: slti $v0, $a1, 4
    *(uint32_t*)((v1) + 0x20) = 0;                              // 0x001a2ae4: sw $zero, 0x20($v1)
    if (v0 != 0) goto label_0x1a2ad0;                           // 0x001a2ae8: bnez $v0, 0x1a2ad0
    *(uint32_t*)((v1) + 0x30) = 0;                              // 0x001a2aec: sw $zero, 0x30($v1)
    a2 = a2 + 1;                                                // 0x001a2af0: addiu $a2, $a2, 1
label_0x1a2af4:
    v0 = (a2 < s6) ? 1 : 0;                                     // 0x001a2af4: slt $v0, $a2, $s6
    if (v0 != 0) goto label_0x1a2ac8;                           // 0x001a2af8: bnez $v0, 0x1a2ac8
    v0 = a2 << 6;                                               // 0x001a2afc: sll $v0, $a2, 6
    func_001a2800();  // 0x1a27b0                                // 0x001a2b04: jal 0x1a27b0
    goto label_0x1a2bd0;                                        // 0x001a2b10: b 0x1a2bd0
label_0x1a2b18:
    func_001a29e0();  // 0x1a29b0                                // 0x001a2b18: jal 0x1a29b0
    a0 = *(int32_t*)(v0);                                       // 0x001a2b20: lw $a0, 0($v0)
    v1 = -1;                                                    // 0x001a2b24: addiu $v1, $zero, -1
    *(uint16_t*)(s4) = a0;                                      // 0x001a2b28: sh $a0, 0($s4)
    a0 = *(int32_t*)((v0) + 0x44);                              // 0x001a2b2c: lw $a0, 0x44($v0)
    *(uint16_t*)((s4) + 2) = a0;                                // 0x001a2b30: sh $a0, 2($s4)
    a0 = *(int32_t*)((v0) + 8);                                 // 0x001a2b34: lw $a0, 8($v0)
    *(uint16_t*)((s4) + 6) = a0;                                // 0x001a2b38: sh $a0, 6($s4)
    a0 = *(int32_t*)((v0) + 0xc);                               // 0x001a2b3c: lw $a0, 0xc($v0)
    *(uint16_t*)((s4) + 8) = a0;                                // 0x001a2b40: sh $a0, 8($s4)
    a0 = *(int16_t*)((s4) + 6);                                 // 0x001a2b44: lh $a0, 6($s4)
    if (a0 == v1) goto label_0x1a2b5c;                          // 0x001a2b48: beq $a0, $v1, 0x1a2b5c
    v1 = a0 - v1;                                               // 0x001a2b54: subu $v1, $a0, $v1
    *(uint16_t*)((s4) + 6) = v1;                                // 0x001a2b58: sh $v1, 6($s4)
label_0x1a2b5c:
    a0 = *(int16_t*)((s4) + 8);                                 // 0x001a2b5c: lh $a0, 8($s4)
    v1 = -1;                                                    // 0x001a2b60: addiu $v1, $zero, -1
    if (a0 == v1) goto label_0x1a2b78;                          // 0x001a2b64: beq $a0, $v1, 0x1a2b78
    v1 = a0 - v1;                                               // 0x001a2b70: subu $v1, $a0, $v1
    *(uint16_t*)((s4) + 8) = v1;                                // 0x001a2b74: sh $v1, 8($s4)
label_0x1a2b78:
    v1 = *(int32_t*)((v0) + 0x40);                              // 0x001a2b78: lw $v1, 0x40($v0)
    *(uint16_t*)((s4) + 0xa) = v1;                              // 0x001a2b80: sh $v1, 0xa($s4)
label_0x1a2b84:
    t0 = a2 << 2;                                               // 0x001a2b84: sll $t0, $a2, 2
    v1 = t0 + 0x10;                                             // 0x001a2b88: addiu $v1, $t0, 0x10
    a3 = s4 + t0;                                               // 0x001a2b8c: addu $a3, $s4, $t0
    a0 = v0 + v1;                                               // 0x001a2b90: addu $a0, $v0, $v1
    a2 = a2 + 1;                                                // 0x001a2b94: addiu $a2, $a2, 1
    FPU_F0 = *(float*)(a0);  // Load float                      // 0x001a2b98: lwc1 $f0, 0($a0)
    v1 = t0 + 0x20;                                             // 0x001a2b9c: addiu $v1, $t0, 0x20
    a1 = v0 + v1;                                               // 0x001a2ba0: addu $a1, $v0, $v1
    v1 = t0 + 0x30;                                             // 0x001a2ba4: addiu $v1, $t0, 0x30
    *(float*)((a3) + 0x10) = FPU_F0;  // Store float            // 0x001a2ba8: swc1 $f0, 0x10($a3)
    a0 = v0 + v1;                                               // 0x001a2bac: addu $a0, $v0, $v1
    FPU_F0 = *(float*)(a1);  // Load float                      // 0x001a2bb0: lwc1 $f0, 0($a1)
    v1 = (a2 < 4) ? 1 : 0;                                      // 0x001a2bb4: slti $v1, $a2, 4
    *(float*)((a3) + 0x20) = FPU_F0;  // Store float            // 0x001a2bb8: swc1 $f0, 0x20($a3)
    FPU_F0 = *(float*)(a0);  // Load float                      // 0x001a2bbc: lwc1 $f0, 0($a0)
    if (v1 != 0) goto label_0x1a2b84;                           // 0x001a2bc0: bnez $v1, 0x1a2b84
    *(float*)((a3) + 0x30) = FPU_F0;  // Store float            // 0x001a2bc4: swc1 $f0, 0x30($a3)
    s4 = s4 + 0x40;                                             // 0x001a2bc8: addiu $s4, $s4, 0x40
    s3 = s3 + 1;                                                // 0x001a2bcc: addiu $s3, $s3, 1
label_0x1a2bd0:
    v0 = (s3 < s6) ? 1 : 0;                                     // 0x001a2bd0: slt $v0, $s3, $s6
    if (v0 != 0) goto label_0x1a2b18;                           // 0x001a2bd4: bnez $v0, 0x1a2b18
    a1 = s3 + s5;                                               // 0x001a2bd8: addu $a1, $s3, $s5
    FPU_F3 = *(float*)(s1);  // Load float                      // 0x001a2bdc: lwc1 $f3, 0($s1)
    v0 = 1;                                                     // 0x001a2be0: addiu $v0, $zero, 1
    FPU_F2 = *(float*)((s1) + 4);  // Load float                // 0x001a2be4: lwc1 $f2, 4($s1)
    FPU_F1 = *(float*)((s1) + 8);  // Load float                // 0x001a2be8: lwc1 $f1, 8($s1)
    FPU_F0 = *(float*)((s1) + 0xc);  // Load float              // 0x001a2bec: lwc1 $f0, 0xc($s1)
    *(float*)(s2) = FPU_F3;  // Store float                     // 0x001a2bf0: swc1 $f3, 0($s2)
    *(float*)((s2) + 4) = FPU_F2;  // Store float               // 0x001a2bf4: swc1 $f2, 4($s2)
    *(float*)((s2) + 8) = FPU_F1;  // Store float               // 0x001a2bf8: swc1 $f1, 8($s2)
    *(float*)((s2) + 0xc) = FPU_F0;  // Store float             // 0x001a2bfc: swc1 $f0, 0xc($s2)
    *(uint32_t*)((s2) + 8) = s1;                                // 0x001a2c00: sw $s1, 8($s2)
label_0x1a2c04:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001a2c08: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001a2c0c: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001a2c10: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a2c18: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a2c1c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a2c20: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a2c24: jr $ra
    sp = sp + 0x80;                                             // 0x001a2c28: addiu $sp, $sp, 0x80
}