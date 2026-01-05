void func_00125b20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_8;
    
    sp = sp + -0x60;                                            // 0x00125b20: addiu $sp, $sp, -0x60
    s4 = 1;                                                     // 0x00125b30: addiu $s4, $zero, 1
    s1 = s0 + 0xe;                                              // 0x00125b38: addiu $s1, $s0, 0xe
    s2 = s0 + 0x10;                                             // 0x00125b40: addiu $s2, $s0, 0x10
    s3 = s0 + 0xf;                                              // 0x00125b48: addiu $s3, $s0, 0xf
    *(uint16_t*)((s0) + 2) = s4;                                // 0x00125b54: sh $s4, 2($s0)
    v0 = s0 + 0x18;                                             // 0x00125b58: addiu $v0, $s0, 0x18
    a2 = sp + 0x20;                                             // 0x00125b60: addiu $a2, $sp, 0x20
    v1 = s0 + 0x9a;                                             // 0x00125b64: addiu $v1, $s0, 0x9a
    a3 = s0 + 0xc;                                              // 0x00125b68: addiu $a3, $s0, 0xc
    t0 = s0 + 0xd;                                              // 0x00125b6c: addiu $t0, $s0, 0xd
    t3 = s0 + 0x14;                                             // 0x00125b78: addiu $t3, $s0, 0x14
    local_0 = v0;                                               // 0x00125b7c: sw $v0, 0($sp)
    local_10 = v1;                                              // 0x00125b80: sw $v1, 0x10($sp)
    func_001258f0();  // 1258f0                                // 0x00125b84: jal 0x1258f0
    local_8 = s2;                                               // 0x00125b88: sw $s2, 8($sp)
    if (v0 >= 0) goto label_0x125ba0;                           // 0x00125b8c: bgezl $v0, 0x125ba0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x00125b90: sw $zero, 0x34($s0)
    goto label_0x125bfc;                                        // 0x00125b94: b 0x125bfc
    /* nop */                                                   // 0x00125b9c: nop 
label_0x125ba0:
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x00125ba0: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x00125ba4: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x00125ba8: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00125bac: sw $zero, 0x20($s0)
    *(uint16_t*)((s0) + 0x1c) = 0;                              // 0x00125bb0: sh $zero, 0x1c($s0)
    *(uint16_t*)((s0) + 0x26) = 0;                              // 0x00125bb4: sh $zero, 0x26($s0)
    *(uint16_t*)((s0) + 0x24) = 0;                              // 0x00125bb8: sh $zero, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0x3c);                              // 0x00125bbc: lw $a1, 0x3c($s0)
    v1 = *(int8_t*)(s1);                                        // 0x00125bc0: lb $v1, 0($s1)
    a2 = *(int32_t*)((s0) + 0x40);                              // 0x00125bc4: lw $a2, 0x40($s0)
    *(uint32_t*)((s0) + 0x50) = v1;                             // 0x00125bc8: sw $v1, 0x50($s0)
    a3 = *(int32_t*)((s0) + 0x44);                              // 0x00125bcc: lw $a3, 0x44($s0)
    a0 = *(int8_t*)(s3);                                        // 0x00125bd0: lb $a0, 0($s3)
    v0 = local_20;                                              // 0x00125bd4: lh $v0, 0x20($sp)
    *(uint32_t*)((s0) + 0x54) = a0;                             // 0x00125bd8: sw $a0, 0x54($s0)
    *(uint16_t*)((s0) + 0x98) = s4;                             // 0x00125bdc: sh $s4, 0x98($s0)
    v1 = *(int32_t*)(s2);                                       // 0x00125be0: lw $v1, 0($s2)
    *(uint32_t*)((s0) + 0x5c) = a1;                             // 0x00125be4: sw $a1, 0x5c($s0)
    *(uint32_t*)((s0) + 0x60) = a2;                             // 0x00125be8: sw $a2, 0x60($s0)
    *(uint32_t*)((s0) + 0x58) = v1;                             // 0x00125bec: sw $v1, 0x58($s0)
    *(uint32_t*)((s0) + 0x64) = a3;                             // 0x00125bf0: sw $a3, 0x64($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x00125bf4: sw $zero, 0x8c($s0)
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x00125bf8: sw $zero, 0x88($s0)
label_0x125bfc:
    return;                                                     // 0x00125c14: jr $ra
    sp = sp + 0x60;                                             // 0x00125c18: addiu $sp, $sp, 0x60
}