void func_0017b620() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x0017b620: addiu $sp, $sp, -0x60
    s1 = s0 + 4;                                                // 0x0017b630: addiu $s1, $s0, 4
    s2 = sp + 0x10;                                             // 0x0017b638: addiu $s2, $sp, 0x10
    v1 = *(int32_t*)((s0) + 0x48);                              // 0x0017b658: lw $v1, 0x48($s0)
    a3 = *(int32_t*)((s0) + 0x44);                              // 0x0017b65c: lw $a3, 0x44($s0)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017b660: srl $v0, $v1, 0x1f
    a2 = *(int32_t*)(s1);                                       // 0x0017b664: lw $a2, 0($s1)
    v0 = v1 + v0;                                               // 0x0017b668: addu $v0, $v1, $v0
    local_14 = a3;                                              // 0x0017b66c: sw $a3, 0x14($sp)
    v0 = v0 >> 1;                                               // 0x0017b670: sra $v0, $v0, 1
    local_0 = a2;                                               // 0x0017b674: sw $a2, 0($sp)
    local_18 = v0;                                              // 0x0017b678: sw $v0, 0x18($sp)
    local_4 = a3;                                               // 0x0017b67c: sw $a3, 4($sp)
    local_8 = v1;                                               // 0x0017b680: sw $v1, 8($sp)
    func_0014f370();  // 14f370                                // 0x0017b684: jal 0x14f370
    local_10 = s3;                                              // 0x0017b688: sw $s3, 0x10($sp)
    a3 = *(int32_t*)((s0) + 0x48);                              // 0x0017b68c: lw $a3, 0x48($s0)
    v0 = *(int32_t*)((s0) + 0x44);                              // 0x0017b694: lw $v0, 0x44($s0)
    v1 = *(int32_t*)(s1);                                       // 0x0017b69c: lw $v1, 0($s1)
    a2 = *(int32_t*)((s4) + 0x3c);                              // 0x0017b6a0: lw $a2, 0x3c($s4)
    local_10 = s3;                                              // 0x0017b6a4: sw $s3, 0x10($sp)
    local_0 = v1;                                               // 0x0017b6a8: sw $v1, 0($sp)
    local_14 = v0;                                              // 0x0017b6ac: sw $v0, 0x14($sp)
    local_18 = a3;                                              // 0x0017b6b0: sw $a3, 0x18($sp)
    local_4 = v0;                                               // 0x0017b6b4: sw $v0, 4($sp)
    func_0014fdd0();  // 14fdd0                                // 0x0017b6b8: jal 0x14fdd0
    local_8 = a3;                                               // 0x0017b6bc: sw $a3, 8($sp)
    return;                                                     // 0x0017b6d8: jr $ra
    sp = sp + 0x60;                                             // 0x0017b6dc: addiu $sp, $sp, 0x60
}