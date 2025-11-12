void func_00123b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_24, local_8;
    
    sp = sp + -0x60;                                            // 0x00123b80: addiu $sp, $sp, -0x60
    v0 = 1;                                                     // 0x00123b84: addiu $v0, $zero, 1
    s1 = s0 + 0xe;                                              // 0x00123b94: addiu $s1, $s0, 0xe
    s2 = s0 + 0x10;                                             // 0x00123b9c: addiu $s2, $s0, 0x10
    s3 = s0 + 0xf;                                              // 0x00123ba4: addiu $s3, $s0, 0xf
    *(uint16_t*)((s0) + 2) = v0;                                // 0x00123bb0: sh $v0, 2($s0)
    v0 = s0 + 0x18;                                             // 0x00123bb4: addiu $v0, $s0, 0x18
    a2 = sp + 0x20;                                             // 0x00123bbc: addiu $a2, $sp, 0x20
    v1 = sp + 0x24;                                             // 0x00123bc0: addiu $v1, $sp, 0x24
    a3 = s0 + 0xc;                                              // 0x00123bc4: addiu $a3, $s0, 0xc
    t0 = s0 + 0xd;                                              // 0x00123bc8: addiu $t0, $s0, 0xd
    t3 = s0 + 0x14;                                             // 0x00123bd4: addiu $t3, $s0, 0x14
    local_0 = v0;                                               // 0x00123bd8: sw $v0, 0($sp)
    local_10 = v1;                                              // 0x00123bdc: sw $v1, 0x10($sp)
    func_00123b80();  // 0x123a70                                // 0x00123be0: jal 0x123a70
    local_8 = s2;                                               // 0x00123be4: sw $s2, 8($sp)
    if (v0 >= 0) goto label_0x123bf8;                           // 0x00123be8: bgezl $v0, 0x123bf8
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x00123bec: sw $zero, 0x34($s0)
    goto label_0x123c60;                                        // 0x00123bf0: b 0x123c60
label_0x123bf8:
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x00123bf8: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x00123bfc: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x00123c00: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00123c04: sw $zero, 0x20($s0)
    *(uint16_t*)((s0) + 0x1c) = 0;                              // 0x00123c08: sh $zero, 0x1c($s0)
    *(uint16_t*)((s0) + 0x26) = 0;                              // 0x00123c0c: sh $zero, 0x26($s0)
    *(uint16_t*)((s0) + 0x24) = 0;                              // 0x00123c10: sh $zero, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0x3c);                              // 0x00123c14: lw $a1, 0x3c($s0)
    v0 = *(int8_t*)(s1);                                        // 0x00123c18: lb $v0, 0($s1)
    a0 = local_24;                                              // 0x00123c1c: lhu $a0, 0x24($sp)
    *(uint32_t*)((s0) + 0x50) = v0;                             // 0x00123c20: sw $v0, 0x50($s0)
    a2 = *(int32_t*)((s0) + 0x40);                              // 0x00123c24: lw $a2, 0x40($s0)
    v1 = *(int8_t*)(s3);                                        // 0x00123c28: lb $v1, 0($s3)
    v0 = local_20;                                              // 0x00123c2c: lh $v0, 0x20($sp)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00123c30: sw $v1, 0x54($s0)
    v1 = 4;                                                     // 0x00123c34: addiu $v1, $zero, 4
    a3 = *(int32_t*)((s0) + 0x44);                              // 0x00123c38: lw $a3, 0x44($s0)
    *(uint16_t*)((s0) + 0x9a) = a0;                             // 0x00123c3c: sh $a0, 0x9a($s0)
    a0 = *(int32_t*)(s2);                                       // 0x00123c40: lw $a0, 0($s2)
    *(uint32_t*)((s0) + 0x5c) = a1;                             // 0x00123c44: sw $a1, 0x5c($s0)
    *(uint16_t*)((s0) + 0x98) = v1;                             // 0x00123c48: sh $v1, 0x98($s0)
    *(uint32_t*)((s0) + 0x58) = a0;                             // 0x00123c4c: sw $a0, 0x58($s0)
    *(uint32_t*)((s0) + 0x60) = a2;                             // 0x00123c50: sw $a2, 0x60($s0)
    *(uint32_t*)((s0) + 0x64) = a3;                             // 0x00123c54: sw $a3, 0x64($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x00123c58: sw $zero, 0x8c($s0)
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x00123c5c: sw $zero, 0x88($s0)
label_0x123c60:
    return;                                                     // 0x00123c74: jr $ra
    sp = sp + 0x60;                                             // 0x00123c78: addiu $sp, $sp, 0x60
}