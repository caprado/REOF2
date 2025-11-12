void func_0019ceb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0019ceb0: addiu $sp, $sp, -0x20
    v0 = 0xffff << 16;                                          // 0x0019ceb4: lui $v0, 0xffff
    v0 = a1 & v0;                                               // 0x0019cebc: and $v0, $a1, $v0
    a1 = (unsigned)v0 >> 0x10;                                  // 0x0019cec0: srl $a1, $v0, 0x10
    v0 = g_0022a588;  // Global at 0x0022a588                   // 0x0019cec8: lw $v0, 8($a0)
    t0 = a1 + -1;                                               // 0x0019cecc: addiu $t0, $a1, -1
    a3 = t0 << 3;                                               // 0x0019ced0: sll $a3, $t0, 3
    v1 = 0x28 << 16;                                            // 0x0019ced4: lui $v1, 0x28
    a3 = a3 - t0;                                               // 0x0019ced8: subu $a3, $a3, $t0
    v1 = v1 + 0x5480;                                           // 0x0019cedc: addiu $v1, $v1, 0x5480
    a3 = a3 << 3;                                               // 0x0019cee0: sll $a3, $a3, 3
    a1 = 1;                                                     // 0x0019cee4: addiu $a1, $zero, 1
    if (v0 == a1) goto label_0x19cf04;                          // 0x0019cee8: beq $v0, $a1, 0x19cf04
    s0 = v1 + a3;                                               // 0x0019ceec: addu $s0, $v1, $a3
    a0 = 0x23 << 16;                                            // 0x0019cef0: lui $a0, 0x23
    func_001a0850();  // 0x1a0760                                // 0x0019cef4: jal 0x1a0760
    a0 = &str_0022a540;  // "Not supported texture bit depth @flCreatePaletteHandle" // 0x0019cef8: addiu $a0, $a0, -0x5ac0
    goto label_0x19d004;                                        // 0x0019cefc: b 0x19d004
label_0x19cf04:
    v1 = g_0022a554;  // Global at 0x0022a554                   // 0x0019cf04: lw $v1, 0x14($a0)
    v0 = 4;                                                     // 0x0019cf08: addiu $v0, $zero, 4
    if (v1 == v0) goto label_0x19cf58;                          // 0x0019cf0c: beq $v1, $v0, 0x19cf58
    /* nop */                                                   // 0x0019cf10: nop 
    v0 = 3;                                                     // 0x0019cf14: addiu $v0, $zero, 3
    if (v1 == v0) goto label_0x19cf4c;                          // 0x0019cf18: beq $v1, $v0, 0x19cf4c
    /* nop */                                                   // 0x0019cf1c: nop 
    v0 = 2;                                                     // 0x0019cf20: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x19cf40;                          // 0x0019cf24: beq $v1, $v0, 0x19cf40
    /* nop */                                                   // 0x0019cf28: nop 
    a0 = 0x23 << 16;                                            // 0x0019cf2c: lui $a0, 0x23
    func_001a0850();  // 0x1a0760                                // 0x0019cf30: jal 0x1a0760
    a0 = &str_0022a580;  // "Not supported texture bit depth @flPS2ConvertTextureFromContext" // 0x0019cf34: addiu $a0, $a0, -0x5a80
    goto label_0x19d004;                                        // 0x0019cf38: b 0x19d004
label_0x19cf40:
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x0019cf40: sw $v0, 0x20($s0)
    goto label_0x19cf60;                                        // 0x0019cf44: b 0x19cf60
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019cf48: sw $v0, 0xc($s0)
label_0x19cf4c:
    *(uint32_t*)((s0) + 0x20) = a1;                             // 0x0019cf4c: sw $a1, 0x20($s0)
    goto label_0x19cf60;                                        // 0x0019cf50: b 0x19cf60
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019cf54: sw $v0, 0xc($s0)
label_0x19cf58:
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x0019cf58: sw $zero, 0x20($s0)
    *(uint32_t*)((s0) + 0xc) = v0;                              // 0x0019cf5c: sw $v0, 0xc($s0)
label_0x19cf60:
    v1 = g_0022a584;  // Global at 0x0022a584                   // 0x0019cf60: lw $v1, 4($a0)
    v0 = 0x100;                                                 // 0x0019cf64: addiu $v0, $zero, 0x100
    if (v1 != v0) goto label_0x19cf84;                          // 0x0019cf68: bne $v1, $v0, 0x19cf84
    v1 = 8;                                                     // 0x0019cf6c: addiu $v1, $zero, 8
    v0 = 0x10;                                                  // 0x0019cf70: addiu $v0, $zero, 0x10
    *(uint16_t*)((s0) + 0x1a) = v0;                             // 0x0019cf74: sh $v0, 0x1a($s0)
    goto label_0x19cf90;                                        // 0x0019cf78: b 0x19cf90
    *(uint16_t*)((s0) + 0x1c) = v0;                             // 0x0019cf7c: sh $v0, 0x1c($s0)
    v1 = 8;                                                     // 0x0019cf80: addiu $v1, $zero, 8
label_0x19cf84:
    v0 = 2;                                                     // 0x0019cf84: addiu $v0, $zero, 2
    *(uint16_t*)((s0) + 0x1a) = v1;                             // 0x0019cf88: sh $v1, 0x1a($s0)
    *(uint16_t*)((s0) + 0x1c) = v0;                             // 0x0019cf8c: sh $v0, 0x1c($s0)
label_0x19cf90:
    v1 = str_0022a580;  // "Not supported texture bit depth @flPS2ConvertTextureFromContext" // 0x0019cf90: lw $v1, 0($a0)
    v0 = 1;                                                     // 0x0019cf94: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 4) = v1;                                // 0x0019cf98: sw $v1, 4($s0)
    *(uint32_t*)(s0) = a2;                                      // 0x0019cf9c: sw $a2, 0($s0)
    *(uint8_t*)((s0) + 0x34) = v0;                              // 0x0019cfa0: sb $v0, 0x34($s0)
    func_0019d830();  // 0x19d7e0                                // 0x0019cfa4: jal 0x19d7e0
    a0 = *(int16_t*)((s0) + 0x1a);                              // 0x0019cfa8: lh $a0, 0x1a($s0)
    *(uint16_t*)((s0) + 0x16) = v0;                             // 0x0019cfac: sh $v0, 0x16($s0)
    func_0019d830();  // 0x19d7e0                                // 0x0019cfb0: jal 0x19d7e0
    a0 = *(int16_t*)((s0) + 0x1c);                              // 0x0019cfb4: lh $a0, 0x1c($s0)
    *(uint16_t*)((s0) + 0x18) = v0;                             // 0x0019cfb8: sh $v0, 0x18($s0)
    *(uint8_t*)((s0) + 0x36) = 0;                               // 0x0019cfc0: sb $zero, 0x36($s0)
    v0 = 1;                                                     // 0x0019cfc4: addiu $v0, $zero, 1
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x0019cfc8: sw $zero, 0x24($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x0019cfcc: sw $zero, 0x2c($s0)
    *(uint8_t*)((s0) + 0x37) = 0;                               // 0x0019cfd0: sb $zero, 0x37($s0)
    func_0019da50();  // 0x19d9f0                                // 0x0019cfd4: jal 0x19d9f0
    *(uint32_t*)((s0) + 0x30) = v0;                             // 0x0019cfd8: sw $v0, 0x30($s0)
    *(uint16_t*)((s0) + 0x10) = v0;                             // 0x0019cfdc: sh $v0, 0x10($s0)
    v0 = 1;                                                     // 0x0019cfe0: addiu $v0, $zero, 1
    *(uint16_t*)((s0) + 0x12) = v0;                             // 0x0019cfe4: sh $v0, 0x12($s0)
    a2 = *(int16_t*)((s0) + 0x1c);                              // 0x0019cfe8: lh $a2, 0x1c($s0)
    a3 = *(int32_t*)((s0) + 0x30);                              // 0x0019cfec: lw $a3, 0x30($s0)
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0019cff0: lw $a0, 0x20($s0)
    func_0019d8d0();  // 0x19d830                                // 0x0019cff4: jal 0x19d830
    a1 = *(int16_t*)((s0) + 0x1a);                              // 0x0019cff8: lh $a1, 0x1a($s0)
    *(uint32_t*)((s0) + 8) = v0;                                // 0x0019cffc: sw $v0, 8($s0)
    v0 = 1;                                                     // 0x0019d000: addiu $v0, $zero, 1
label_0x19d004:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019d008: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019d00c: jr $ra
    sp = sp + 0x20;                                             // 0x0019d010: addiu $sp, $sp, 0x20
}