void func_001d0e40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_1c;
    
    sp = sp + -0x30;                                            // 0x001d0e40: addiu $sp, $sp, -0x30
    v1 = *(int32_t*)((gp) + -0x6260);                           // 0x001d0e4c: lw $v1, -0x6260($gp)
    if (v1 == 0) goto label_0x1d0f44;                           // 0x001d0e50: beqz $v1, 0x1d0f44
    v0 = *(int32_t*)((gp) + -0x6284);                           // 0x001d0e58: lw $v0, -0x6284($gp)
    if (v0 == 0) goto label_0x1d0e70;                           // 0x001d0e5c: beqz $v0, 0x1d0e70
    /* nop */                                                   // 0x001d0e60: nop 
    v0 = *(int32_t*)((gp) + -0x6288);                           // 0x001d0e64: lw $v0, -0x6288($gp)
    if (v0 != 0) goto label_0x1d0ef8;                           // 0x001d0e68: bnez $v0, 0x1d0ef8
    /* nop */                                                   // 0x001d0e6c: nop 
label_0x1d0e70:
    v1 = *(int32_t*)(v1);                                       // 0x001d0e70: lw $v1, 0($v1)
    v0 = 1;                                                     // 0x001d0e74: addiu $v0, $zero, 1
    if (v1 == v0) goto label_0x1d0ea8;                          // 0x001d0e78: beq $v1, $v0, 0x1d0ea8
    /* nop */                                                   // 0x001d0e7c: nop 
    v0 = 2;                                                     // 0x001d0e80: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d0e94;                          // 0x001d0e84: beq $v1, $v0, 0x1d0e94
    /* nop */                                                   // 0x001d0e88: nop 
    goto label_0x1d0efc;                                        // 0x001d0e8c: b 0x1d0efc
    a1 = *(int32_t*)((gp) + -0x6284);                           // 0x001d0e90: lw $a1, -0x6284($gp)
label_0x1d0e94:
    func_001c95f0();  // 1c95f0                                // 0x001d0e94: jal 0x1c95f0
    a0 = sp + 0x10;                                             // 0x001d0e98: addiu $a0, $sp, 0x10
    a0 = local_1c;                                              // 0x001d0e9c: lw $a0, 0x1c($sp)
    goto label_0x1d0ef8;                                        // 0x001d0ea0: b 0x1d0ef8
    a2 = local_18;                                              // 0x001d0ea4: lw $a2, 0x18($sp)
label_0x1d0ea8:
    v1 = *(int8_t*)((gp) + -0x627c);                            // 0x001d0ea8: lb $v1, -0x627c($gp)
    if (v1 == v0) goto label_0x1d0ee0;                          // 0x001d0eac: beq $v1, $v0, 0x1d0ee0
    /* nop */                                                   // 0x001d0eb0: nop 
    if (v1 == 0) goto label_0x1d0ef8;                           // 0x001d0eb4: beqz $v1, 0x1d0ef8
    v0 = 2;                                                     // 0x001d0eb8: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1d0ecc;                          // 0x001d0ebc: beq $v1, $v0, 0x1d0ecc
    /* nop */                                                   // 0x001d0ec0: nop 
    goto label_0x1d0ef8;                                        // 0x001d0ec4: b 0x1d0ef8
    /* nop */                                                   // 0x001d0ec8: nop 
label_0x1d0ecc:
    func_001c95f0();  // 1c95f0                                // 0x001d0ecc: jal 0x1c95f0
    a0 = sp + 0x10;                                             // 0x001d0ed0: addiu $a0, $sp, 0x10
    a0 = local_1c;                                              // 0x001d0ed4: lw $a0, 0x1c($sp)
    goto label_0x1d0ef8;                                        // 0x001d0ed8: b 0x1d0ef8
    a2 = local_18;                                              // 0x001d0edc: lw $a2, 0x18($sp)
label_0x1d0ee0:
    a0 = 0x33 << 16;                                            // 0x001d0ee0: lui $a0, 0x33
    a1 = gp + -0x62b0;                                          // 0x001d0ee4: addiu $a1, $gp, -0x62b0
    func_001ca0e0();  // 1ca0e0                                // 0x001d0ee8: jal 0x1ca0e0
    a0 = a0 + -0x2e50;                                          // 0x001d0eec: addiu $a0, $a0, -0x2e50
    a2 = *(int32_t*)((gp) + -0x62b0);                           // 0x001d0ef0: lw $a2, -0x62b0($gp)
    a0 = *(int32_t*)((gp) + -0x62ac);                           // 0x001d0ef4: lw $a0, -0x62ac($gp)
label_0x1d0ef8:
    a1 = *(int32_t*)((gp) + -0x6284);                           // 0x001d0ef8: lw $a1, -0x6284($gp)
label_0x1d0efc:
    if (a1 == 0) goto label_0x1d0f0c;                           // 0x001d0efc: beqz $a1, 0x1d0f0c
    /* nop */                                                   // 0x001d0f00: nop 
    goto label_0x1d0f14;                                        // 0x001d0f04: b 0x1d0f14
    a2 = *(int32_t*)((gp) + -0x6288);                           // 0x001d0f08: lw $a2, -0x6288($gp)
label_0x1d0f0c:
    a2 = *(int32_t*)((gp) + -0x6288);                           // 0x001d0f10: lw $a2, -0x6288($gp)
label_0x1d0f14:
    if (a2 == 0) goto label_0x1d0f24;                           // 0x001d0f14: beqz $a2, 0x1d0f24
    /* nop */                                                   // 0x001d0f18: nop 
    goto label_0x1d0f28;                                        // 0x001d0f1c: b 0x1d0f28
    /* nop */                                                   // 0x001d0f20: nop 
label_0x1d0f24:
label_0x1d0f28:
    a0 = 0x33 << 16;                                            // 0x001d0f28: lui $a0, 0x33
    func_001c93b0();  // 1c93b0                                // 0x001d0f2c: jal 0x1c93b0
    a0 = a0 + -0x2e50;                                          // 0x001d0f30: addiu $a0, $a0, -0x2e50
    func_001d0c00();  // 1d0c00                                // 0x001d0f34: jal 0x1d0c00
    /* nop */                                                   // 0x001d0f38: nop 
    func_001cb150();  // 1cb150                                // 0x001d0f3c: jal 0x1cb150
    /* nop */                                                   // 0x001d0f40: nop 
label_0x1d0f44:
    return;                                                     // 0x001d0f48: jr $ra
    sp = sp + 0x30;                                             // 0x001d0f4c: addiu $sp, $sp, 0x30
}