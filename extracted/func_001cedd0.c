void func_001cedd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001cedd0: addiu $sp, $sp, -0x10
    v1 = 0x22 << 16;                                            // 0x001ceddc: lui $v1, 0x22
    v1 = v1 + -0xd00;                                           // 0x001cede0: addiu $v1, $v1, -0xd00
label_0x1cede4:
    v0 = a3 << 3;                                               // 0x001cede4: sll $v0, $a3, 3
    v0 = v0 - a3;                                               // 0x001cede8: subu $v0, $v0, $a3
    v0 = v0 << 2;                                               // 0x001cedec: sll $v0, $v0, 2
    t1 = v1 + v0;                                               // 0x001cedf0: addu $t1, $v1, $v0
    v0 = *(int32_t*)((t1) + 8);                                 // 0x001cedf4: lw $v0, 8($t1)
    if (v0 == 0) goto label_0x1cee50;                           // 0x001cedf8: beqz $v0, 0x1cee50
    /* nop */                                                   // 0x001cedfc: nop 
    if (v0 != a1) goto label_0x1cee48;                          // 0x001cee00: bne $v0, $a1, 0x1cee48
    /* nop */                                                   // 0x001cee04: nop 
    v0 = *(int32_t*)((t1) + 0xc);                               // 0x001cee08: lw $v0, 0xc($t1)
    if (v0 != a2) goto label_0x1cee48;                          // 0x001cee0c: bne $v0, $a2, 0x1cee48
    /* nop */                                                   // 0x001cee10: nop 
    v1 = *(int32_t*)(t1);                                       // 0x001cee14: lw $v1, 0($t1)
    *(uint32_t*)(a0) = v1;                                      // 0x001cee1c: sw $v1, 0($a0)
    v1 = *(int32_t*)((t1) + 4);                                 // 0x001cee20: lw $v1, 4($t1)
    *(uint32_t*)((a0) + 4) = v1;                                // 0x001cee24: sw $v1, 4($a0)
    *(uint32_t*)((a0) + 8) = a1;                                // 0x001cee28: sw $a1, 8($a0)
    *(uint32_t*)((a0) + 0xc) = a2;                              // 0x001cee2c: sw $a2, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = t0;                             // 0x001cee30: sw $t0, 0x10($a0)
    v1 = *(int32_t*)((t1) + 0x14);                              // 0x001cee34: lw $v1, 0x14($t1)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x001cee38: sw $v1, 0x14($a0)
    v1 = *(int32_t*)((t1) + 0x18);                              // 0x001cee3c: lw $v1, 0x18($t1)
    goto label_0x1ceed8;                                        // 0x001cee40: b 0x1ceed8
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001cee44: sw $v1, 0x18($a0)
label_0x1cee48:
    goto label_0x1cede4;                                        // 0x001cee48: b 0x1cede4
    a3 = a3 + 1;                                                // 0x001cee4c: addiu $a3, $a3, 1
label_0x1cee50:
    v1 = 0x22 << 16;                                            // 0x001cee54: lui $v1, 0x22
    v1 = v1 + -0xc90;                                           // 0x001cee58: addiu $v1, $v1, -0xc90
label_0x1cee5c:
    v0 = t1 << 3;                                               // 0x001cee5c: sll $v0, $t1, 3
    v0 = v0 - t1;                                               // 0x001cee60: subu $v0, $v0, $t1
    v0 = v0 << 2;                                               // 0x001cee64: sll $v0, $v0, 2
    a3 = v1 + v0;                                               // 0x001cee68: addu $a3, $v1, $v0
    v0 = *(int32_t*)((a3) + 8);                                 // 0x001cee6c: lw $v0, 8($a3)
    if (v0 == 0) goto label_0x1ceec8;                           // 0x001cee70: beqz $v0, 0x1ceec8
    /* nop */                                                   // 0x001cee74: nop 
    if (v0 != a1) goto label_0x1ceec0;                          // 0x001cee78: bne $v0, $a1, 0x1ceec0
    /* nop */                                                   // 0x001cee7c: nop 
    v0 = *(int32_t*)((a3) + 0xc);                               // 0x001cee80: lw $v0, 0xc($a3)
    if (v0 != a2) goto label_0x1ceec0;                          // 0x001cee84: bne $v0, $a2, 0x1ceec0
    /* nop */                                                   // 0x001cee88: nop 
    v1 = *(int32_t*)(a3);                                       // 0x001cee8c: lw $v1, 0($a3)
    *(uint32_t*)(a0) = v1;                                      // 0x001cee94: sw $v1, 0($a0)
    v1 = *(int32_t*)((a3) + 4);                                 // 0x001cee98: lw $v1, 4($a3)
    *(uint32_t*)((a0) + 4) = v1;                                // 0x001cee9c: sw $v1, 4($a0)
    *(uint32_t*)((a0) + 8) = a1;                                // 0x001ceea0: sw $a1, 8($a0)
    *(uint32_t*)((a0) + 0xc) = a2;                              // 0x001ceea4: sw $a2, 0xc($a0)
    *(uint32_t*)((a0) + 0x10) = t0;                             // 0x001ceea8: sw $t0, 0x10($a0)
    v1 = *(int32_t*)((a3) + 0x14);                              // 0x001ceeac: lw $v1, 0x14($a3)
    *(uint32_t*)((a0) + 0x14) = v1;                             // 0x001ceeb0: sw $v1, 0x14($a0)
    v1 = *(int32_t*)((a3) + 0x18);                              // 0x001ceeb4: lw $v1, 0x18($a3)
    goto label_0x1ceed8;                                        // 0x001ceeb8: b 0x1ceed8
    *(uint32_t*)((a0) + 0x18) = v1;                             // 0x001ceebc: sw $v1, 0x18($a0)
label_0x1ceec0:
    goto label_0x1cee5c;                                        // 0x001ceec0: b 0x1cee5c
    t1 = t1 + 1;                                                // 0x001ceec4: addiu $t1, $t1, 1
label_0x1ceec8:
    a1 = 0xff;                                                  // 0x001ceec8: addiu $a1, $zero, 0xff
    func_00107d30();  // 0x107c70                                // 0x001ceecc: jal 0x107c70
    a2 = 0x1c;                                                  // 0x001ceed0: addiu $a2, $zero, 0x1c
    v0 = -1;                                                    // 0x001ceed4: addiu $v0, $zero, -1
label_0x1ceed8:
    return;                                                     // 0x001ceedc: jr $ra
    sp = sp + 0x10;                                             // 0x001ceee0: addiu $sp, $sp, 0x10
}