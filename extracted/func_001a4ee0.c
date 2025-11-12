void func_001a4ee0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a4ee0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a4eec: addu.qb $zero, $sp, $s1
    func_001a5460();  // 0x1a53c0                                // 0x001a4efc: jal 0x1a53c0
    if (v0 != 0) goto label_0x1a4f14;                           // 0x001a4f04: bnez $v0, 0x1a4f14
    goto label_0x1a5168;                                        // 0x001a4f0c: b 0x1a5168
label_0x1a4f14:
    func_001a56b0();  // 0x1a54d0                                // 0x001a4f14: jal 0x1a54d0
    v1 = *(uint8_t*)((v0) + 0x11);                              // 0x001a4f1c: lbu $v1, 0x11($v0)
    at = (v1 < 8) ? 1 : 0;                                      // 0x001a4f20: slti $at, $v1, 8
    if (at != 0) goto label_0x1a4f34;                           // 0x001a4f24: bnez $at, 0x1a4f34
    /* nop */                                                   // 0x001a4f28: nop 
    goto label_0x1a5168;                                        // 0x001a4f2c: b 0x1a5168
label_0x1a4f34:
    t4 = *(uint16_t*)((v0) + 0x14);                             // 0x001a4f34: lhu $t4, 0x14($v0)
    t3 = *(uint16_t*)((v0) + 0x16);                             // 0x001a4f3c: lhu $t3, 0x16($v0)
    a2 = 4;                                                     // 0x001a4f40: addiu $a2, $zero, 4
    a3 = 5;                                                     // 0x001a4f44: addiu $a3, $zero, 5
    t0 = 1;                                                     // 0x001a4f48: addiu $t0, $zero, 1
    t1 = 2;                                                     // 0x001a4f4c: addiu $t1, $zero, 2
    t2 = 3;                                                     // 0x001a4f50: addiu $t2, $zero, 3
    s2 = 8;                                                     // 0x001a4f54: addiu $s2, $zero, 8
    s1 = 0x10;                                                  // 0x001a4f58: addiu $s1, $zero, 0x10
    t9 = 0xff;                                                  // 0x001a4f5c: addiu $t9, $zero, 0xff
    t7 = 0x18;                                                  // 0x001a4f60: addiu $t7, $zero, 0x18
    a1 = 0xa;                                                   // 0x001a4f64: addiu $a1, $zero, 0xa
    a0 = 0x1f;                                                  // 0x001a4f68: addiu $a0, $zero, 0x1f
    goto label_0x1a5154;                                        // 0x001a4f6c: b 0x1a5154
    v1 = 0xf;                                                   // 0x001a4f70: addiu $v1, $zero, 0xf
label_0x1a4f74:
    *(uint32_t*)(s0) = 0;                                       // 0x001a4f74: sw $zero, 0($s0)
    *(uint32_t*)((s0) + 4) = t4;                                // 0x001a4f78: sw $t4, 4($s0)
    *(uint32_t*)((s0) + 8) = t3;                                // 0x001a4f7c: sw $t3, 8($s0)
    t6 = *(uint8_t*)((v0) + 0x13);                              // 0x001a4f80: lbu $t6, 0x13($v0)
    if (t6 == t2) goto label_0x1a50f8;                          // 0x001a4f84: beq $t6, $t2, 0x1a50f8
    /* nop */                                                   // 0x001a4f88: nop 
    if (t6 == t1) goto label_0x1a50a8;                          // 0x001a4f8c: beq $t6, $t1, 0x1a50a8
    /* nop */                                                   // 0x001a4f90: nop 
    if (t6 == t0) goto label_0x1a5058;                          // 0x001a4f94: beq $t6, $t0, 0x1a5058
    /* nop */                                                   // 0x001a4f98: nop 
    if (t6 == a3) goto label_0x1a5004;                          // 0x001a4f9c: beq $t6, $a3, 0x1a5004
    /* nop */                                                   // 0x001a4fa0: nop 
    if (t6 == a2) goto label_0x1a4fb4;                          // 0x001a4fa4: beq $t6, $a2, 0x1a4fb4
    /* nop */                                                   // 0x001a4fa8: nop 
    goto label_0x1a5148;                                        // 0x001a4fac: b 0x1a5148
    s0 = s0 + 0x48;                                             // 0x001a4fb0: addiu $s0, $s0, 0x48
label_0x1a4fb4:
    t6 = *(int32_t*)(s0);                                       // 0x001a4fb4: lw $t6, 0($s0)
    t6 = t6 | 0x14;                                             // 0x001a4fb8: ori $t6, $t6, 0x14
    *(uint32_t*)(s0) = t6;                                      // 0x001a4fbc: sw $t6, 0($s0)
    *(uint32_t*)((s0) + 0x14) = 0;                              // 0x001a4fc0: sw $zero, 0x14($s0)
    t6 = *(int32_t*)((s0) + 4);                                 // 0x001a4fc4: lw $t6, 4($s0)
    t6 = t6 >> 1;                                               // 0x001a4fc8: sra $t6, $t6, 1
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x001a4fcc: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a4fd0: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x001a4fd4: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001a4fd8: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x001a4fdc: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001a4fe0: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001a4fe4: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a4fe8: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001a4fec: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = 0;                              // 0x001a4ff0: sw $zero, 0x38($s0)
    *(uint32_t*)((s0) + 0x40) = 0;                              // 0x001a4ff4: sw $zero, 0x40($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001a4ff8: sw $zero, 0x3c($s0)
    goto label_0x1a5144;                                        // 0x001a4ffc: b 0x1a5144
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x001a5000: sw $zero, 0x44($s0)
label_0x1a5004:
    t6 = *(int32_t*)(s0);                                       // 0x001a5004: lw $t6, 0($s0)
    t6 = t6 | 4;                                                // 0x001a5008: ori $t6, $t6, 4
    *(uint32_t*)(s0) = t6;                                      // 0x001a500c: sw $t6, 0($s0)
    *(uint32_t*)((s0) + 0x14) = t0;                             // 0x001a5010: sw $t0, 0x14($s0)
    t8 = *(int32_t*)((s0) + 0x14);                              // 0x001a5014: lw $t8, 0x14($s0)
    t6 = *(int32_t*)((s0) + 4);                                 // 0x001a5018: lw $t6, 4($s0)
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x001a5020: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a5024: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x18) = 0;                              // 0x001a5028: sw $zero, 0x18($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001a502c: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x001a5030: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001a5034: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001a5038: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a503c: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001a5040: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x38) = 0;                              // 0x001a5044: sw $zero, 0x38($s0)
    *(uint32_t*)((s0) + 0x40) = 0;                              // 0x001a5048: sw $zero, 0x40($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001a504c: sw $zero, 0x3c($s0)
    goto label_0x1a5144;                                        // 0x001a5050: b 0x1a5144
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x001a5054: sw $zero, 0x44($s0)
label_0x1a5058:
    *(uint32_t*)((s0) + 0x14) = t1;                             // 0x001a5058: sw $t1, 0x14($s0)
    t8 = *(int32_t*)((s0) + 0x14);                              // 0x001a505c: lw $t8, 0x14($s0)
    t6 = *(int32_t*)((s0) + 4);                                 // 0x001a5060: lw $t6, 4($s0)
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x001a5068: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x18) = a3;                             // 0x001a506c: sw $a3, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = a1;                             // 0x001a5070: sw $a1, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = a0;                             // 0x001a5074: sw $a0, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = a3;                             // 0x001a5078: sw $a3, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = a3;                             // 0x001a507c: sw $a3, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = a0;                             // 0x001a5080: sw $a0, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = a3;                             // 0x001a5084: sw $a3, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a5088: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = a0;                             // 0x001a508c: sw $a0, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = t0;                             // 0x001a5090: sw $t0, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = v1;                             // 0x001a5094: sw $v1, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = t0;                             // 0x001a5098: sw $t0, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a509c: sw $zero, 0x1c($s0)
    goto label_0x1a5144;                                        // 0x001a50a0: b 0x1a5144
    *(uint32_t*)((s0) + 0x34) = a1;                             // 0x001a50a4: sw $a1, 0x34($s0)
label_0x1a50a8:
    *(uint32_t*)((s0) + 0x14) = t2;                             // 0x001a50a8: sw $t2, 0x14($s0)
    t8 = *(int32_t*)((s0) + 0x14);                              // 0x001a50ac: lw $t8, 0x14($s0)
    t6 = *(int32_t*)((s0) + 4);                                 // 0x001a50b0: lw $t6, 4($s0)
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x001a50b8: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x18) = s2;                             // 0x001a50bc: sw $s2, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x001a50c0: sw $s1, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = t9;                             // 0x001a50c4: sw $t9, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = s2;                             // 0x001a50c8: sw $s2, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = s2;                             // 0x001a50cc: sw $s2, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = t9;                             // 0x001a50d0: sw $t9, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = s2;                             // 0x001a50d4: sw $s2, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a50d8: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = t9;                             // 0x001a50dc: sw $t9, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = 0;                              // 0x001a50e0: sw $zero, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = 0;                              // 0x001a50e4: sw $zero, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = 0;                              // 0x001a50e8: sw $zero, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a50ec: sw $zero, 0x1c($s0)
    goto label_0x1a5144;                                        // 0x001a50f0: b 0x1a5144
    *(uint32_t*)((s0) + 0x34) = s1;                             // 0x001a50f4: sw $s1, 0x34($s0)
label_0x1a50f8:
    *(uint32_t*)((s0) + 0x14) = a2;                             // 0x001a50f8: sw $a2, 0x14($s0)
    t8 = *(int32_t*)((s0) + 0x14);                              // 0x001a50fc: lw $t8, 0x14($s0)
    t6 = *(int32_t*)((s0) + 4);                                 // 0x001a5100: lw $t6, 4($s0)
    *(uint32_t*)((s0) + 0xc) = t6;                              // 0x001a5108: sw $t6, 0xc($s0)
    *(uint32_t*)((s0) + 0x18) = s2;                             // 0x001a510c: sw $s2, 0x18($s0)
    *(uint32_t*)((s0) + 0x1c) = s1;                             // 0x001a5110: sw $s1, 0x1c($s0)
    *(uint32_t*)((s0) + 0x20) = t9;                             // 0x001a5114: sw $t9, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = s2;                             // 0x001a5118: sw $s2, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = s2;                             // 0x001a511c: sw $s2, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = t9;                             // 0x001a5120: sw $t9, 0x2c($s0)
    *(uint32_t*)((s0) + 0x30) = s2;                             // 0x001a5124: sw $s2, 0x30($s0)
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001a5128: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x38) = t9;                             // 0x001a512c: sw $t9, 0x38($s0)
    *(uint32_t*)((s0) + 0x3c) = s2;                             // 0x001a5130: sw $s2, 0x3c($s0)
    *(uint32_t*)((s0) + 0x40) = t7;                             // 0x001a5134: sw $t7, 0x40($s0)
    *(uint32_t*)((s0) + 0x44) = t9;                             // 0x001a5138: sw $t9, 0x44($s0)
    *(uint32_t*)((s0) + 0x1c) = 0;                              // 0x001a513c: sw $zero, 0x1c($s0)
    *(uint32_t*)((s0) + 0x34) = s1;                             // 0x001a5140: sw $s1, 0x34($s0)
label_0x1a5144:
    s0 = s0 + 0x48;                                             // 0x001a5144: addiu $s0, $s0, 0x48
label_0x1a5148:
    t4 = t4 >> 1;                                               // 0x001a5148: sra $t4, $t4, 1
    t3 = t3 >> 1;                                               // 0x001a514c: sra $t3, $t3, 1
    t5 = t5 + 1;                                                // 0x001a5150: addiu $t5, $t5, 1
label_0x1a5154:
    t6 = *(uint8_t*)((v0) + 0x11);                              // 0x001a5154: lbu $t6, 0x11($v0)
    t6 = (t5 < t6) ? 1 : 0;                                     // 0x001a5158: slt $t6, $t5, $t6
    if (t6 != 0) goto label_0x1a4f74;                           // 0x001a515c: bnez $t6, 0x1a4f74
    /* nop */                                                   // 0x001a5160: nop 
    v0 = 1;                                                     // 0x001a5164: addiu $v0, $zero, 1
label_0x1a5168:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a516c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a5170: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a5174: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a5178: jr $ra
    sp = sp + 0x40;                                             // 0x001a517c: addiu $sp, $sp, 0x40
}