void func_0017b548() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x0017b548: addiu $sp, $sp, -0x60
    s1 = s0 + 4;                                                // 0x0017b558: addiu $s1, $s0, 4
    local_10 = a2;                                              // 0x0017b570: sw $a2, 0x10($sp)
    a1 = *(int32_t*)((s0) + 0x44);                              // 0x0017b574: lw $a1, 0x44($s0)
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017b578: lw $v0, 0x48($s0)
    v1 = *(int32_t*)(s1);                                       // 0x0017b57c: lw $v1, 0($s1)
    local_14 = a1;                                              // 0x0017b580: sw $a1, 0x14($sp)
    local_0 = v1;                                               // 0x0017b584: sw $v1, 0($sp)
    local_4 = a1;                                               // 0x0017b588: sw $a1, 4($sp)
    func_0017ab20();  // 0x17aa68                                // 0x0017b58c: jal 0x17aa68
    local_8 = v0;                                               // 0x0017b590: sw $v0, 8($sp)
    v1 = 1;                                                     // 0x0017b594: addiu $v1, $zero, 1
    a1 = sp + 0x10;                                             // 0x0017b59c: addiu $a1, $sp, 0x10
    if (v0 != v1) goto label_0x17b5c0;                          // 0x0017b5a0: bne $v0, $v1, 0x17b5c0
    a2 = 1;                                                     // 0x0017b5a4: addiu $a2, $zero, 1
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017b5a8: lw $v0, 0x48($s0)
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x0017b5ac: srl $v1, $v0, 0x1f
    v0 = v0 + v1;                                               // 0x0017b5b0: addu $v0, $v0, $v1
    goto label_0x17b5c4;                                        // 0x0017b5b4: b 0x17b5c4
    v0 = v0 >> 1;                                               // 0x0017b5b8: sra $v0, $v0, 1
    /* nop */                                                   // 0x0017b5bc: nop 
label_0x17b5c0:
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x0017b5c0: lw $v0, 0x48($s0)
label_0x17b5c4:
    local_18 = v0;                                              // 0x0017b5c4: sw $v0, 0x18($sp)
    v0 = *(int32_t*)((s2) + 8);                                 // 0x0017b5c8: lw $v0, 8($s2)
    if (v0 != 0) goto label_0x17b5dc;                           // 0x0017b5cc: bnez $v0, 0x17b5dc
    /* nop */                                                   // 0x0017b5d0: nop 
    v0 = *(int32_t*)((s1) + 4);                                 // 0x0017b5d4: lw $v0, 4($s1)
    v0 = v0 << 2;                                               // 0x0017b5d8: sll $v0, $v0, 2
label_0x17b5dc:
    if (s3 != a2) goto label_0x17b5f8;                          // 0x0017b5dc: bne $s3, $a2, 0x17b5f8
    local_1c = v0;                                              // 0x0017b5e0: sw $v0, 0x1c($sp)
    func_0014f488();  // 0x14f390                                // 0x0017b5e4: jal 0x14f390
    a2 = *(int32_t*)((s2) + 0x3c);                              // 0x0017b5e8: lw $a2, 0x3c($s2)
    goto label_0x17b608;                                        // 0x0017b5ec: b 0x17b608
    /* nop */                                                   // 0x0017b5f4: nop 
label_0x17b5f8:
    func_0014f390();  // 0x14f370                                // 0x0017b5fc: jal 0x14f370
    a1 = sp + 0x10;                                             // 0x0017b600: addiu $a1, $sp, 0x10
label_0x17b608:
    return;                                                     // 0x0017b618: jr $ra
    sp = sp + 0x60;                                             // 0x0017b61c: addiu $sp, $sp, 0x60
}