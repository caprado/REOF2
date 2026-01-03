void func_0017b020() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_18, local_1c, local_4, local_8;
    
    sp = sp + -0x60;                                            // 0x0017b020: addiu $sp, $sp, -0x60
    s2 = s1 + 4;                                                // 0x0017b030: addiu $s2, $s1, 4
    v1 = *(int32_t*)((s1) + 0x48);                              // 0x0017b050: lw $v1, 0x48($s1)
    a3 = *(int32_t*)((s1) + 0x44);                              // 0x0017b054: lw $a3, 0x44($s1)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017b058: srl $v0, $v1, 0x1f
    t0 = *(int32_t*)((s3) + 8);                                 // 0x0017b05c: lw $t0, 8($s3)
    a1 = *(int32_t*)(s2);                                       // 0x0017b060: lw $a1, 0($s2)
    v0 = v1 + v0;                                               // 0x0017b064: addu $v0, $v1, $v0
    v0 = v0 >> 1;                                               // 0x0017b068: sra $v0, $v0, 1
    local_14 = a3;                                              // 0x0017b06c: sw $a3, 0x14($sp)
    local_0 = a1;                                               // 0x0017b070: sw $a1, 0($sp)
    local_18 = v0;                                              // 0x0017b074: sw $v0, 0x18($sp)
    local_4 = a3;                                               // 0x0017b078: sw $a3, 4($sp)
    local_8 = v1;                                               // 0x0017b07c: sw $v1, 8($sp)
    if (t0 != 0) goto label_0x17b098;                           // 0x0017b080: bnez $t0, 0x17b098
    local_10 = s4;                                              // 0x0017b084: sw $s4, 0x10($sp)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0017b088: lw $v0, 4($s2)
    v0 = v0 << 2;                                               // 0x0017b08c: sll $v0, $v0, 2
    goto label_0x17b09c;                                        // 0x0017b090: b 0x17b09c
    local_1c = v0;                                              // 0x0017b094: sw $v0, 0x1c($sp)
label_0x17b098:
    local_1c = t0;                                              // 0x0017b098: sw $t0, 0x1c($sp)
label_0x17b09c:
    s0 = sp + 0x10;                                             // 0x0017b09c: addiu $s0, $sp, 0x10
    func_0014f488();  // 14f488                                // 0x0017b0a0: jal 0x14f488
    a2 = *(int32_t*)((s1) + 0x48);                              // 0x0017b0ac: lw $a2, 0x48($s1)
    v1 = *(int32_t*)((s1) + 0x44);                              // 0x0017b0b4: lw $v1, 0x44($s1)
    a3 = *(int32_t*)((s3) + 8);                                 // 0x0017b0b8: lw $a3, 8($s3)
    v0 = *(int32_t*)(s2);                                       // 0x0017b0bc: lw $v0, 0($s2)
    local_14 = v1;                                              // 0x0017b0c0: sw $v1, 0x14($sp)
    local_0 = v0;                                               // 0x0017b0c4: sw $v0, 0($sp)
    local_10 = s4;                                              // 0x0017b0c8: sw $s4, 0x10($sp)
    local_18 = a2;                                              // 0x0017b0cc: sw $a2, 0x18($sp)
    local_4 = v1;                                               // 0x0017b0d0: sw $v1, 4($sp)
    if (a3 != 0) goto label_0x17b0f0;                           // 0x0017b0d4: bnez $a3, 0x17b0f0
    local_8 = a2;                                               // 0x0017b0d8: sw $a2, 8($sp)
    v0 = *(int32_t*)((s2) + 4);                                 // 0x0017b0dc: lw $v0, 4($s2)
    v0 = v0 << 2;                                               // 0x0017b0e0: sll $v0, $v0, 2
    goto label_0x17b0f4;                                        // 0x0017b0e4: b 0x17b0f4
    local_1c = v0;                                              // 0x0017b0e8: sw $v0, 0x1c($sp)
    /* nop */                                                   // 0x0017b0ec: nop 
label_0x17b0f0:
    local_1c = a3;                                              // 0x0017b0f0: sw $a3, 0x1c($sp)
label_0x17b0f4:
    func_0014fcc0();  // 14fcc0                                // 0x0017b0f4: jal 0x14fcc0
    a2 = *(int32_t*)((s3) + 0x3c);                              // 0x0017b0f8: lw $a2, 0x3c($s3)
    return;                                                     // 0x0017b114: jr $ra
    sp = sp + 0x60;                                             // 0x0017b118: addiu $sp, $sp, 0x60
}