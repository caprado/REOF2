void func_00142c78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0xb0;                                            // 0x00142c78: addiu $sp, $sp, -0xb0
    v0 = 0x140;                                                 // 0x00142c7c: addiu $v0, $zero, 0x140
    local_0 = a1;                                               // 0x00142c80: sw $a1, 0($sp)
    v0 = s4 + a1;                                               // 0x00142ca4: addu $v0, $s4, $a1
    v1 = *(int32_t*)((v0) + 0x6e0);                             // 0x00142cb8: lw $v1, 0x6e0($v0)
    if (v1 == 0) goto label_0x142d5c;                           // 0x00142cbc: beqz $v1, 0x142d5c
    v0 = s4 + 0x6d4;                                            // 0x00142cc0: addiu $v0, $s4, 0x6d4
    local_4 = v0;                                               // 0x00142cc4: sw $v0, 4($sp)
    v0 = v0 + a1;                                               // 0x00142cc8: addu $v0, $v0, $a1
    v1 = *(int32_t*)(v0);                                       // 0x00142ccc: lw $v1, 0($v0)
    if (v1 <= 0) goto label_0x142d6c;                           // 0x00142cd0: blez $v1, 0x142d6c
    v1 = s4 + 0x6d8;                                            // 0x00142cd8: addiu $v1, $s4, 0x6d8
    s7 = s4 + 0x5d0;                                            // 0x00142cdc: addiu $s7, $s4, 0x5d0
    local_8 = v1;                                               // 0x00142ce0: sw $v1, 8($sp)
    s6 = s4 + 0x5e0;                                            // 0x00142ce4: addiu $s6, $s4, 0x5e0
    fp = s4 + 0x6d0;                                            // 0x00142ce8: addiu $fp, $s4, 0x6d0
    v0 = local_0;                                               // 0x00142cec: lw $v0, 0($sp)
label_0x142cf0:
    s1 = 0x140;                                                 // 0x00142cf0: addiu $s1, $zero, 0x140
    s3 = 0x1c;                                                  // 0x00142cf4: addiu $s3, $zero, 0x1c
    s0 = s5 << 2;                                               // 0x00142cf8: sll $s0, $s5, 2
    s5 = s5 + 1;                                                // 0x00142d04: addiu $s5, $s5, 1
    s0 = s0 + s1;                                               // 0x00142d08: addu $s0, $s0, $s1
    s2 = s1 + 0x5a8;                                            // 0x00142d0c: addiu $s2, $s1, 0x5a8
    v0 = s7 + s0;                                               // 0x00142d10: addu $v0, $s7, $s0
    s2 = s4 + s2;                                               // 0x00142d14: addu $s2, $s4, $s2
    a0 = s3 + 0x48;                                             // 0x00142d18: addiu $a0, $s3, 0x48
    v1 = *(int32_t*)(v0);                                       // 0x00142d1c: lw $v1, 0($v0)
    /* call function at address in v1 */                        // 0x00142d20: jalr $v1
    a0 = s2 + a0;                                               // 0x00142d24: addu $a0, $s2, $a0
    s0 = s6 + s0;                                               // 0x00142d28: addu $s0, $s6, $s0
    s3 = s3 + 0xb8;                                             // 0x00142d2c: addiu $s3, $s3, 0xb8
    v0 = *(int32_t*)(s0);                                       // 0x00142d30: lw $v0, 0($s0)
    /* call function at address in v0 */                        // 0x00142d34: jalr $v0
    a0 = s2 + s3;                                               // 0x00142d38: addu $a0, $s2, $s3
    v1 = local_4;                                               // 0x00142d3c: lw $v1, 4($sp)
    s1 = v1 + s1;                                               // 0x00142d40: addu $s1, $v1, $s1
    v0 = *(int32_t*)(s1);                                       // 0x00142d44: lw $v0, 0($s1)
    v0 = (s5 < v0) ? 1 : 0;                                     // 0x00142d48: slt $v0, $s5, $v0
    if (v0 != 0) goto label_0x142cf0;                           // 0x00142d4c: bnez $v0, 0x142cf0
    v0 = local_0;                                               // 0x00142d50: lw $v0, 0($sp)
    goto label_0x142d7c;                                        // 0x00142d54: b 0x142d7c
    v1 = local_0;                                               // 0x00142d58: lw $v1, 0($sp)
label_0x142d5c:
    v0 = s4 + 0x6d8;                                            // 0x00142d5c: addiu $v0, $s4, 0x6d8
    fp = s4 + 0x6d0;                                            // 0x00142d60: addiu $fp, $s4, 0x6d0
    goto label_0x142d78;                                        // 0x00142d64: b 0x142d78
    local_8 = v0;                                               // 0x00142d68: sw $v0, 8($sp)
label_0x142d6c:
    v1 = s4 + 0x6d8;                                            // 0x00142d6c: addiu $v1, $s4, 0x6d8
    fp = s4 + 0x6d0;                                            // 0x00142d70: addiu $fp, $s4, 0x6d0
    local_8 = v1;                                               // 0x00142d74: sw $v1, 8($sp)
label_0x142d78:
    v1 = local_0;                                               // 0x00142d78: lw $v1, 0($sp)
label_0x142d7c:
    v0 = 0x140;                                                 // 0x00142d7c: addiu $v0, $zero, 0x140
    v0 = local_8;                                               // 0x00142d84: lw $v0, 8($sp)
    v1 = v0 + a0;                                               // 0x00142d88: addu $v1, $v0, $a0
    v0 = *(int32_t*)(v1);                                       // 0x00142d8c: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x142db0;                           // 0x00142d90: beqz $v0, 0x142db0
    v0 = s4 + a0;                                               // 0x00142d94: addu $v0, $s4, $a0
    v1 = *(int32_t*)((v0) + 0x6e4);                             // 0x00142d98: lw $v1, 0x6e4($v0)
    if (v1 == 0) goto label_0x142db0;                           // 0x00142d9c: beqz $v1, 0x142db0
    a1 = 0x22 << 16;                                            // 0x00142da0: lui $a1, 0x22
    func_00148588();  // 0x148530                                // 0x00142da8: jal 0x148530
    a1 = &str_00226630;  // "Error code detected(BDEC)"         // 0x00142dac: addiu $a1, $a1, 0x6630
label_0x142db0:
    v1 = local_0;                                               // 0x00142db0: lw $v1, 0($sp)
    v0 = 0x140;                                                 // 0x00142db4: addiu $v0, $zero, 0x140
    v0 = local_8;                                               // 0x00142dbc: lw $v0, 8($sp)
    v1 = v0 + a1;                                               // 0x00142dc0: addu $v1, $v0, $a1
    v0 = *(int32_t*)(v1);                                       // 0x00142dc4: lw $v0, 0($v1)
    if (v0 == 0) goto label_0x142e10;                           // 0x00142dc8: beqz $v0, 0x142e10
    v0 = s4 + a1;                                               // 0x00142dcc: addu $v0, $s4, $a1
    v0 = fp + a1;                                               // 0x00142dd0: addu $v0, $fp, $a1
    v1 = s4 + a1;                                               // 0x00142dd4: addu $v1, $s4, $a1
    a0 = *(int32_t*)(v0);                                       // 0x00142dd8: lw $a0, 0($v0)
    a1 = *(int32_t*)((v1) + 0x5ac);                             // 0x00142ddc: lw $a1, 0x5ac($v1)
    return func_00143be8();  // Tail call                       // 0x00142e08: j 0x143be8
    sp = sp + 0xb0;                                             // 0x00142e0c: addiu $sp, $sp, 0xb0
label_0x142e10:
    v1 = *(int32_t*)((v0) + 0x6e4);                             // 0x00142e10: lw $v1, 0x6e4($v0)
    if (v1 == 0) goto label_0x142e54;                           // 0x00142e14: beqz $v1, 0x142e54
    v0 = fp + a1;                                               // 0x00142e18: addu $v0, $fp, $a1
    a1 = *(int32_t*)((s4) + 0x834);                             // 0x00142e20: lw $a1, 0x834($s4)
    a0 = *(int32_t*)(v0);                                       // 0x00142e24: lw $a0, 0($v0)
    return func_00143be8();  // Tail call                       // 0x00142e4c: j 0x143be8
    sp = sp + 0xb0;                                             // 0x00142e50: addiu $sp, $sp, 0xb0
label_0x142e54:
    v1 = s4 + a1;                                               // 0x00142e54: addu $v1, $s4, $a1
    a1 = *(int32_t*)((s4) + 0x834);                             // 0x00142e58: lw $a1, 0x834($s4)
    a0 = *(int32_t*)(v0);                                       // 0x00142e5c: lw $a0, 0($v0)
    a2 = *(int32_t*)((v1) + 0x5ac);                             // 0x00142e60: lw $a2, 0x5ac($v1)
    return func_00143b88();  // Tail call                       // 0x00142e8c: j 0x143b88
    sp = sp + 0xb0;                                             // 0x00142e90: addiu $sp, $sp, 0xb0
    /* nop */                                                   // 0x00142e94: nop 
    a1 = *(int32_t*)((a0) + 0x14);                              // 0x00142e98: lw $a1, 0x14($a0)
    a2 = *(int32_t*)((a0) + 0x18);                              // 0x00142e9c: lw $a2, 0x18($a0)
    a3 = *(int32_t*)((a0) + 8);                                 // 0x00142ea0: lw $a3, 8($a0)
    t6 = *(int32_t*)(a0);                                       // 0x00142ea4: lw $t6, 0($a0)
    t5 = *(int32_t*)((a0) + 4);                                 // 0x00142ea8: lw $t5, 4($a0)
    t4 = *(int32_t*)((a0) + 0x10);                              // 0x00142eac: lw $t4, 0x10($a0)
    t3 = t4 << 1;                                               // 0x00142eb0: sll $t3, $t4, 1
    t7 = -1;                                                    // 0x00142eb4: addiu $t7, $zero, -1
label_0x142ebc:
    /* FPU: andi.b $w0, $w0, 0xa8 */                            // 0x00142ebc: andi.b $w0, $w0, 0xa8
    a3 = a3 + -1;                                               // 0x00142ec0: addi $a3, $a3, -1
    /* FPU: andi.b $w0, $w0, 0xc9 */                            // 0x00142ec4: andi.b $w0, $w0, 0xc9
    a1 = a1 + t4;                                               // 0x00142ec8: addu $a1, $a1, $t4
    a2 = a2 + t4;                                               // 0x00142edc: addu $a2, $a2, $t4
    /* FPU: addu.qb $zero, $t6, $t1 */                          // 0x00142ee0: addu.qb $zero, $t6, $t1
    if (a3 > 0) goto label_0x142ebc;                            // 0x00142ee4: bgtz $a3, 0x142ebc
    t6 = t6 + t3;                                               // 0x00142ee8: addu $t6, $t6, $t3
    a1 = a1 + 0x80;                                             // 0x00142eec: addiu $a1, $a1, 0x80
    a2 = a2 + 0x80;                                             // 0x00142ef0: addiu $a2, $a2, 0x80
    a3 = *(int32_t*)((a0) + 0xc);                               // 0x00142ef4: lw $a3, 0xc($a0)
    t2 = t7 & a3;                                               // 0x00142ef8: and $t2, $t7, $a3
    if (t2 != 0) goto label_0x142ebc;                           // 0x00142efc: bnez $t2, 0x142ebc
    return;                                                     // 0x00142f04: jr $ra
    /* nop */                                                   // 0x00142f08: nop 
}