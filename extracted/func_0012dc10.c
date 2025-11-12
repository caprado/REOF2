void func_0012dc10() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x0012dc10: addiu $sp, $sp, -0x40
    v0 = *(int32_t*)(s4);                                       // 0x0012dc48: lw $v0, 0($s4)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0012dc50: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0012dc54: jalr $v1
    v0 = local_4;                                               // 0x0012dc5c: lw $v0, 4($sp)
    v0 = (v0 < s0) ? 1 : 0;                                     // 0x0012dc60: slt $v0, $v0, $s0
    if (v0 == 0) goto label_0x12dc90;                           // 0x0012dc64: beqz $v0, 0x12dc90
    v0 = 4;                                                     // 0x0012dc68: addiu $v0, $zero, 4
    v1 = *(int32_t*)(s4);                                       // 0x0012dc6c: lw $v1, 0($s4)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012dc78: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012dc7c: jalr $v0
    goto label_0x12ddac;                                        // 0x0012dc84: b 0x12ddac
    /* nop */                                                   // 0x0012dc8c: nop 
label_0x12dc90:
    if (s1 != v0) goto label_0x12dcf8;                          // 0x0012dc90: bne $s1, $v0, 0x12dcf8
    v0 = 2;                                                     // 0x0012dc94: addiu $v0, $zero, 2
    a2 = local_0;                                               // 0x0012dc9c: lw $a2, 0($sp)
    if (s2 <= 0) goto label_0x12dd90;                           // 0x0012dca0: blez $s2, 0x12dd90
    t1 = 0xff << 16;                                            // 0x0012dca8: lui $t1, 0xff
    /* nop */                                                   // 0x0012dcac: nop 
label_0x12dcb0:
    a0 = *(int32_t*)(a3);                                       // 0x0012dcb0: lw $a0, 0($a3)
    a3 = a3 + 4;                                                // 0x0012dcb4: addiu $a3, $a3, 4
    t0 = t0 + 1;                                                // 0x0012dcb8: addiu $t0, $t0, 1
    a1 = a0 >> 8;                                               // 0x0012dcbc: sra $a1, $a0, 8
    v1 = a0 << 8;                                               // 0x0012dcc0: sll $v1, $a0, 8
    v0 = (unsigned)a0 >> 0x18;                                  // 0x0012dcc4: srl $v0, $a0, 0x18
    a0 = a0 << 0x18;                                            // 0x0012dcc8: sll $a0, $a0, 0x18
    v1 = v1 & t1;                                               // 0x0012dccc: and $v1, $v1, $t1
    a1 = a1 & 0xff00;                                           // 0x0012dcd0: andi $a1, $a1, 0xff00
    v0 = v0 | a0;                                               // 0x0012dcd4: or $v0, $v0, $a0
    a0 = (t0 < s2) ? 1 : 0;                                     // 0x0012dcd8: slt $a0, $t0, $s2
    v1 = v1 | a1;                                               // 0x0012dcdc: or $v1, $v1, $a1
    v0 = v0 | v1;                                               // 0x0012dce0: or $v0, $v0, $v1
    *(uint32_t*)(a2) = v0;                                      // 0x0012dce4: sw $v0, 0($a2)
    if (a0 != 0) goto label_0x12dcb0;                           // 0x0012dce8: bnez $a0, 0x12dcb0
    a2 = a2 + 4;                                                // 0x0012dcec: addiu $a2, $a2, 4
    goto label_0x12dd94;                                        // 0x0012dcf0: b 0x12dd94
    v1 = *(int32_t*)(s4);                                       // 0x0012dcf4: lw $v1, 0($s4)
label_0x12dcf8:
    if (s1 != v0) goto label_0x12dd50;                          // 0x0012dcf8: bne $s1, $v0, 0x12dd50
    v0 = 1;                                                     // 0x0012dcfc: addiu $v0, $zero, 1
    a2 = local_0;                                               // 0x0012dd04: lw $a2, 0($sp)
    if (s2 <= 0) goto label_0x12dd90;                           // 0x0012dd08: blez $s2, 0x12dd90
    a3 = -0x100;                                                // 0x0012dd10: addiu $a3, $zero, -0x100
    /* nop */                                                   // 0x0012dd14: nop 
label_0x12dd18:
    v0 = *(uint16_t*)(a1);                                      // 0x0012dd18: lhu $v0, 0($a1)
    t0 = t0 + 1;                                                // 0x0012dd1c: addiu $t0, $t0, 1
    v1 = *(uint8_t*)((a1) + 1);                                 // 0x0012dd20: lbu $v1, 1($a1)
    a1 = a1 + 2;                                                // 0x0012dd24: addiu $a1, $a1, 2
    v0 = v0 << 8;                                               // 0x0012dd28: sll $v0, $v0, 8
    a0 = (t0 < s2) ? 1 : 0;                                     // 0x0012dd2c: slt $a0, $t0, $s2
    v0 = v0 & a3;                                               // 0x0012dd30: and $v0, $v0, $a3
    v1 = v1 | v0;                                               // 0x0012dd34: or $v1, $v1, $v0
    *(uint16_t*)(a2) = v1;                                      // 0x0012dd38: sh $v1, 0($a2)
    if (a0 != 0) goto label_0x12dd18;                           // 0x0012dd3c: bnez $a0, 0x12dd18
    a2 = a2 + 2;                                                // 0x0012dd40: addiu $a2, $a2, 2
    goto label_0x12dd94;                                        // 0x0012dd44: b 0x12dd94
    v1 = *(int32_t*)(s4);                                       // 0x0012dd48: lw $v1, 0($s4)
    /* nop */                                                   // 0x0012dd4c: nop 
label_0x12dd50:
    if (s1 != v0) goto label_0x12dd70;                          // 0x0012dd50: bne $s1, $v0, 0x12dd70
    a0 = local_0;                                               // 0x0012dd54: lw $a0, 0($sp)
    func_00107b68();  // 0x107ab8                                // 0x0012dd5c: jal 0x107ab8
    a2 = s2 & 0xffff;                                           // 0x0012dd60: andi $a2, $s2, 0xffff
    goto label_0x12dd94;                                        // 0x0012dd64: b 0x12dd94
    v1 = *(int32_t*)(s4);                                       // 0x0012dd68: lw $v1, 0($s4)
    /* nop */                                                   // 0x0012dd6c: nop 
label_0x12dd70:
    /* nop */                                                   // 0x0012dd70: nop 
    /* nop */                                                   // 0x0012dd74: nop 
    /* nop */                                                   // 0x0012dd78: nop 
    /* nop */                                                   // 0x0012dd7c: nop 
    /* nop */                                                   // 0x0012dd80: nop 
    goto label_0x12dd70;                                        // 0x0012dd84: b 0x12dd70
    /* nop */                                                   // 0x0012dd88: nop 
    /* nop */                                                   // 0x0012dd8c: nop 
label_0x12dd90:
    v1 = *(int32_t*)(s4);                                       // 0x0012dd90: lw $v1, 0($s4)
label_0x12dd94:
    a1 = 1;                                                     // 0x0012dd98: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012dd9c: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012dda0: jalr $v0
label_0x12ddac:
    return;                                                     // 0x0012ddc4: jr $ra
    sp = sp + 0x40;                                             // 0x0012ddc8: addiu $sp, $sp, 0x40
}