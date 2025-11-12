void func_001bfe40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bfe40: addiu $sp, $sp, -0x20
    v0 = 2;                                                     // 0x001bfe44: addiu $v0, $zero, 2
    v1 = *(int32_t*)(a0);                                       // 0x001bfe50: lw $v1, 0($a0)
    if (v1 == v0) goto label_0x1bff70;                          // 0x001bfe54: beq $v1, $v0, 0x1bff70
    v0 = 1;                                                     // 0x001bfe5c: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1bfed8;                          // 0x001bfe60: beq $v1, $v0, 0x1bfed8
    /* nop */                                                   // 0x001bfe64: nop 
    if (v1 == 0) goto label_0x1bfe78;                           // 0x001bfe68: beqz $v1, 0x1bfe78
    /* nop */                                                   // 0x001bfe6c: nop 
    goto label_0x1bffb0;                                        // 0x001bfe70: b 0x1bffb0
label_0x1bfe78:
    func_001bf210();  // 0x1bf010                                // 0x001bfe78: jal 0x1bf010
    /* nop */                                                   // 0x001bfe7c: nop 
    v1 = 2;                                                     // 0x001bfe80: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1bfec8;                          // 0x001bfe84: beq $v0, $v1, 0x1bfec8
    v1 = 1;                                                     // 0x001bfe88: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1bfec8;                          // 0x001bfe8c: beq $v0, $v1, 0x1bfec8
    /* nop */                                                   // 0x001bfe90: nop 
    v1 = 3;                                                     // 0x001bfe94: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1bfebc;                          // 0x001bfe98: beq $v0, $v1, 0x1bfebc
    /* nop */                                                   // 0x001bfe9c: nop 
    if (v0 == 0) goto label_0x1bfeb0;                           // 0x001bfea0: beqz $v0, 0x1bfeb0
    /* nop */                                                   // 0x001bfea4: nop 
    goto label_0x1bffac;                                        // 0x001bfea8: b 0x1bffac
    /* nop */                                                   // 0x001bfeac: nop 
label_0x1bfeb0:
    v0 = -0xff;                                                 // 0x001bfeb0: addiu $v0, $zero, -0xff
    goto label_0x1bffac;                                        // 0x001bfeb4: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bfeb8: sw $v0, 0x24($s0)
label_0x1bfebc:
    v0 = -0xfe;                                                 // 0x001bfebc: addiu $v0, $zero, -0xfe
    goto label_0x1bffac;                                        // 0x001bfec0: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bfec4: sw $v0, 0x24($s0)
label_0x1bfec8:
    v0 = *(int32_t*)(s0);                                       // 0x001bfec8: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001bfecc: addiu $v0, $v0, 1
    goto label_0x1bffac;                                        // 0x001bfed0: b 0x1bffac
    *(uint32_t*)(s0) = v0;                                      // 0x001bfed4: sw $v0, 0($s0)
label_0x1bfed8:
    func_001bf300();  // 0x1bf210                                // 0x001bfed8: jal 0x1bf210
    /* nop */                                                   // 0x001bfedc: nop 
    v1 = 3;                                                     // 0x001bfee0: addiu $v1, $zero, 3
    if (v0 == v1) goto label_0x1bff60;                          // 0x001bfee4: beq $v0, $v1, 0x1bff60
    v1 = 2;                                                     // 0x001bfee8: addiu $v1, $zero, 2
    if (v0 == v1) goto label_0x1bff50;                          // 0x001bfeec: beq $v0, $v1, 0x1bff50
    /* nop */                                                   // 0x001bfef0: nop 
    v1 = 1;                                                     // 0x001bfef4: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1bff40;                          // 0x001bfef8: beq $v0, $v1, 0x1bff40
    /* nop */                                                   // 0x001bfefc: nop 
    if (v0 == 0) goto label_0x1bff10;                           // 0x001bff00: beqz $v0, 0x1bff10
    at = 0x31 << 16;                                            // 0x001bff04: lui $at, 0x31
    goto label_0x1bffac;                                        // 0x001bff08: b 0x1bffac
    /* nop */                                                   // 0x001bff0c: nop 
label_0x1bff10:
    v0 = *(int32_t*)((s0) + 0xbc);                              // 0x001bff10: lw $v0, 0xbc($s0)
    v1 = g_00315e30;  // Global at 0x00315e30                   // 0x001bff14: lw $v1, 0x5e30($at)
    if (v1 == v0) goto label_0x1bff30;                          // 0x001bff18: beq $v1, $v0, 0x1bff30
    /* nop */                                                   // 0x001bff1c: nop 
    *(uint32_t*)(s0) = 0;                                       // 0x001bff20: sw $zero, 0($s0)
    v0 = -0xfb;                                                 // 0x001bff24: addiu $v0, $zero, -0xfb
    goto label_0x1bffac;                                        // 0x001bff28: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bff2c: sw $v0, 0x24($s0)
label_0x1bff30:
    v0 = *(int32_t*)(s0);                                       // 0x001bff30: lw $v0, 0($s0)
    v0 = v0 + 1;                                                // 0x001bff34: addiu $v0, $v0, 1
    goto label_0x1bffac;                                        // 0x001bff38: b 0x1bffac
    *(uint32_t*)(s0) = v0;                                      // 0x001bff3c: sw $v0, 0($s0)
label_0x1bff40:
    *(uint32_t*)(s0) = 0;                                       // 0x001bff40: sw $zero, 0($s0)
    v0 = -0xfd;                                                 // 0x001bff44: addiu $v0, $zero, -0xfd
    goto label_0x1bffac;                                        // 0x001bff48: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bff4c: sw $v0, 0x24($s0)
label_0x1bff50:
    *(uint32_t*)(s0) = 0;                                       // 0x001bff50: sw $zero, 0($s0)
    v0 = -0xff;                                                 // 0x001bff54: addiu $v0, $zero, -0xff
    goto label_0x1bffac;                                        // 0x001bff58: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bff5c: sw $v0, 0x24($s0)
label_0x1bff60:
    *(uint32_t*)(s0) = 0;                                       // 0x001bff60: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001bff64: addiu $v0, $zero, -0x100
    goto label_0x1bffac;                                        // 0x001bff68: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bff6c: sw $v0, 0x24($s0)
label_0x1bff70:
    func_001bf3c0();  // 0x1bf300                                // 0x001bff70: jal 0x1bf300
    /* nop */                                                   // 0x001bff74: nop 
    v1 = 1;                                                     // 0x001bff78: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1bffa0;                          // 0x001bff7c: beq $v0, $v1, 0x1bffa0
    /* nop */                                                   // 0x001bff80: nop 
    if (v0 == 0) goto label_0x1bff94;                           // 0x001bff84: beqz $v0, 0x1bff94
    /* nop */                                                   // 0x001bff88: nop 
    goto label_0x1bffac;                                        // 0x001bff8c: b 0x1bffac
    /* nop */                                                   // 0x001bff90: nop 
label_0x1bff94:
    *(uint32_t*)(s0) = 0;                                       // 0x001bff94: sw $zero, 0($s0)
    goto label_0x1bffac;                                        // 0x001bff98: b 0x1bffac
    *(uint32_t*)((s0) + 0x24) = 0;                              // 0x001bff9c: sw $zero, 0x24($s0)
label_0x1bffa0:
    *(uint32_t*)(s0) = 0;                                       // 0x001bffa0: sw $zero, 0($s0)
    v0 = -0x100;                                                // 0x001bffa4: addiu $v0, $zero, -0x100
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001bffa8: sw $v0, 0x24($s0)
label_0x1bffac:
label_0x1bffb0:
    func_001bfc20();  // 0x1bfbf0                                // 0x001bffb0: jal 0x1bfbf0
    /* nop */                                                   // 0x001bffb4: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bffbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bffc0: jr $ra
    sp = sp + 0x20;                                             // 0x001bffc4: addiu $sp, $sp, 0x20
}