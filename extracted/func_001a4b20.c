void func_001a4b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    goto label_0x1a4b30;                                        // 0x001a4b20: j 0x1a4b30
    /* nop */                                                   // 0x001a4b24: nop 
    /* nop */                                                   // 0x001a4b28: nop 
    /* nop */                                                   // 0x001a4b2c: nop 
label_0x1a4b30:
    a2 = *(int32_t*)((a0) + 4);                                 // 0x001a4b30: lw $a2, 4($a0)
    v1 = 0x13;                                                  // 0x001a4b34: addiu $v1, $zero, 0x13
    v0 = *(int32_t*)((gp) + -0x641c);                           // 0x001a4b38: lw $v0, -0x641c($gp)
    a1 = *(uint8_t*)(a0);                                       // 0x001a4b3c: lbu $a1, 0($a0)
    if (a1 == v1) goto label_0x1a4c2c;                          // 0x001a4b40: beq $a1, $v1, 0x1a4c2c
    v0 = a2 + v0;                                               // 0x001a4b44: addu $v0, $a2, $v0
    v1 = 0x12;                                                  // 0x001a4b48: addiu $v1, $zero, 0x12
    if (a1 == v1) goto label_0x1a4c10;                          // 0x001a4b4c: beq $a1, $v1, 0x1a4c10
    v1 = 0x11;                                                  // 0x001a4b50: addiu $v1, $zero, 0x11
    if (a1 == v1) goto label_0x1a4bf4;                          // 0x001a4b54: beq $a1, $v1, 0x1a4bf4
    /* nop */                                                   // 0x001a4b58: nop 
    v1 = 0x10;                                                  // 0x001a4b5c: addiu $v1, $zero, 0x10
    if (a1 == v1) goto label_0x1a4be8;                          // 0x001a4b60: beq $a1, $v1, 0x1a4be8
    v1 = 0x23;                                                  // 0x001a4b64: addiu $v1, $zero, 0x23
    if (a1 == v1) goto label_0x1a4bcc;                          // 0x001a4b68: beq $a1, $v1, 0x1a4bcc
    /* nop */                                                   // 0x001a4b6c: nop 
    v1 = 0x22;                                                  // 0x001a4b70: addiu $v1, $zero, 0x22
    if (a1 == v1) goto label_0x1a4bb8;                          // 0x001a4b74: beq $a1, $v1, 0x1a4bb8
    v1 = 0x21;                                                  // 0x001a4b78: addiu $v1, $zero, 0x21
    if (a1 == v1) goto label_0x1a4ba4;                          // 0x001a4b7c: beq $a1, $v1, 0x1a4ba4
    /* nop */                                                   // 0x001a4b80: nop 
    v0 = 0x20;                                                  // 0x001a4b84: addiu $v0, $zero, 0x20
    if (a1 == v0) goto label_0x1a4b98;                          // 0x001a4b88: beq $a1, $v0, 0x1a4b98
    /* nop */                                                   // 0x001a4b8c: nop 
    goto label_0x1a4c50;                                        // 0x001a4b90: b 0x1a4c50
    /* nop */                                                   // 0x001a4b94: nop 
label_0x1a4b98:
    /* move to FPU: $zero, $f0 */                               // 0x001a4b98: mtc1 $zero, $f0
    goto label_0x1a4c50;                                        // 0x001a4b9c: b 0x1a4c50
    /* nop */                                                   // 0x001a4ba0: nop 
label_0x1a4ba4:
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001a4ba4: lhu $v1, 2($a0)
    v1 = v1 << 3;                                               // 0x001a4ba8: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001a4bac: addu $v0, $v0, $v1
    goto label_0x1a4c50;                                        // 0x001a4bb0: b 0x1a4c50
    FPU_F0 = *(float*)((v0) + -4);  // Load float               // 0x001a4bb4: lwc1 $f0, -4($v0)
label_0x1a4bb8:
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001a4bb8: lhu $v1, 2($a0)
    v1 = v1 << 4;                                               // 0x001a4bbc: sll $v1, $v1, 4
    v0 = v0 + v1;                                               // 0x001a4bc0: addu $v0, $v0, $v1
    goto label_0x1a4c50;                                        // 0x001a4bc4: b 0x1a4c50
    FPU_F0 = *(float*)((v0) + -0xc);  // Load float             // 0x001a4bc8: lwc1 $f0, -0xc($v0)
label_0x1a4bcc:
    a0 = *(uint16_t*)((a0) + 2);                                // 0x001a4bcc: lhu $a0, 2($a0)
    v1 = a0 << 2;                                               // 0x001a4bd0: sll $v1, $a0, 2
    v1 = v1 + a0;                                               // 0x001a4bd4: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001a4bd8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001a4bdc: addu $v0, $v0, $v1
    goto label_0x1a4c50;                                        // 0x001a4be0: b 0x1a4c50
    FPU_F0 = *(float*)((v0) + -0xc);  // Load float             // 0x001a4be4: lwc1 $f0, -0xc($v0)
label_0x1a4be8:
    /* move to FPU: $zero, $f0 */                               // 0x001a4be8: mtc1 $zero, $f0
    goto label_0x1a4c50;                                        // 0x001a4bec: b 0x1a4c50
    /* nop */                                                   // 0x001a4bf0: nop 
label_0x1a4bf4:
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001a4bf4: lhu $v1, 2($a0)
    v1 = v1 << 2;                                               // 0x001a4bf8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001a4bfc: addu $v0, $v0, $v1
    v0 = *(int16_t*)((v0) + -2);                                // 0x001a4c00: lh $v0, -2($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4c04: mtc1 $v0, $f0
    goto label_0x1a4c50;                                        // 0x001a4c08: b 0x1a4c50
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4c0c: cvt.s.w $f0, $f0
label_0x1a4c10:
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001a4c10: lhu $v1, 2($a0)
    v1 = v1 << 3;                                               // 0x001a4c14: sll $v1, $v1, 3
    v0 = v0 + v1;                                               // 0x001a4c18: addu $v0, $v0, $v1
    v0 = *(int16_t*)((v0) + -6);                                // 0x001a4c1c: lh $v0, -6($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4c20: mtc1 $v0, $f0
    goto label_0x1a4c50;                                        // 0x001a4c24: b 0x1a4c50
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4c28: cvt.s.w $f0, $f0
label_0x1a4c2c:
    a0 = *(uint16_t*)((a0) + 2);                                // 0x001a4c2c: lhu $a0, 2($a0)
    v1 = a0 << 1;                                               // 0x001a4c30: sll $v1, $a0, 1
    v1 = v1 + a0;                                               // 0x001a4c34: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001a4c38: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001a4c3c: addu $v0, $v0, $v1
    v0 = *(int16_t*)((v0) + -6);                                // 0x001a4c40: lh $v0, -6($v0)
    /* move to FPU: $v0, $f0 */                                 // 0x001a4c44: mtc1 $v0, $f0
    /* nop */                                                   // 0x001a4c48: nop 
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x001a4c4c: cvt.s.w $f0, $f0
label_0x1a4c50:
    return;                                                     // 0x001a4c50: jr $ra
    /* nop */                                                   // 0x001a4c54: nop 
}