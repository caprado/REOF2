void func_0016b2a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_20, local_8;
    
    sp = sp + -0x50;                                            // 0x0016b2a8: addiu $sp, $sp, -0x50
    s1 = a0 + 0x90c;                                            // 0x0016b2b0: addiu $s1, $a0, 0x90c
    s2 = *(int32_t*)((a0) + 0x1aec);                            // 0x0016b2c4: lw $s2, 0x1aec($a0)
    s0 = *(int32_t*)(s2);                                       // 0x0016b2c8: lw $s0, 0($s2)
    func_00157b00();  // 0x157a90                                // 0x0016b2cc: jal 0x157a90
    v0 = local_8;                                               // 0x0016b2d8: lw $v0, 8($sp)
    a1 = sp + 0x10;                                             // 0x0016b2dc: addiu $a1, $sp, 0x10
    if (v0 <= 0) goto label_0x16b2ec;                           // 0x0016b2e0: blez $v0, 0x16b2ec
    a2 = 1;                                                     // 0x0016b2e4: addiu $a2, $zero, 1
    *(uint32_t*)((s1) + 0x18) = v0;                             // 0x0016b2e8: sw $v0, 0x18($s1)
label_0x16b2ec:
    func_00157bb0();  // 0x157b00                                // 0x0016b2ec: jal 0x157b00
    /* nop */                                                   // 0x0016b2f0: nop 
    v1 = -1;                                                    // 0x0016b2f4: addiu $v1, $zero, -1
    v0 = local_20;                                              // 0x0016b2f8: lw $v0, 0x20($sp)
    if (v0 != v1) goto label_0x16b304;                          // 0x0016b2fc: bnel $v0, $v1, 0x16b304
    *(uint32_t*)((s1) + 0x1c) = v0;                             // 0x0016b300: sw $v0, 0x1c($s1)
label_0x16b304:
    v0 = *(int32_t*)((s1) + 0x24);                              // 0x0016b304: lw $v0, 0x24($s1)
    if (v0 != v1) goto label_0x16b31c;                          // 0x0016b308: bnel $v0, $v1, 0x16b31c
    v0 = *(int32_t*)((s1) + 0x28);                              // 0x0016b30c: lw $v0, 0x28($s1)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0016b310: lw $v0, 8($s2)
    *(uint32_t*)((s1) + 0x24) = v0;                             // 0x0016b314: sw $v0, 0x24($s1)
    v0 = *(int32_t*)((s1) + 0x28);                              // 0x0016b318: lw $v0, 0x28($s1)
label_0x16b31c:
    if (v0 != v1) goto label_0x16b32c;                          // 0x0016b31c: bne $v0, $v1, 0x16b32c
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0016b324: lw $v0, 4($s2)
    *(uint32_t*)((s1) + 0x28) = v0;                             // 0x0016b328: sw $v0, 0x28($s1)
label_0x16b32c:
    return;                                                     // 0x0016b338: jr $ra
    sp = sp + 0x50;                                             // 0x0016b33c: addiu $sp, $sp, 0x50
}