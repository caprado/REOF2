void func_00125658() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_20, local_8;
    
    sp = sp + -0x60;                                            // 0x00125658: addiu $sp, $sp, -0x60
    v0 = 1;                                                     // 0x0012565c: addiu $v0, $zero, 1
    s1 = s0 + 0xe;                                              // 0x0012566c: addiu $s1, $s0, 0xe
    s2 = s0 + 0x10;                                             // 0x00125674: addiu $s2, $s0, 0x10
    s3 = s0 + 0xf;                                              // 0x0012567c: addiu $s3, $s0, 0xf
    *(uint16_t*)((s0) + 2) = v0;                                // 0x00125688: sh $v0, 2($s0)
    v0 = s0 + 0x18;                                             // 0x0012568c: addiu $v0, $s0, 0x18
    a2 = sp + 0x20;                                             // 0x00125694: addiu $a2, $sp, 0x20
    v1 = s0 + 0x9a;                                             // 0x00125698: addiu $v1, $s0, 0x9a
    a3 = s0 + 0xc;                                              // 0x0012569c: addiu $a3, $s0, 0xc
    t0 = s0 + 0xd;                                              // 0x001256a0: addiu $t0, $s0, 0xd
    t3 = s0 + 0x14;                                             // 0x001256ac: addiu $t3, $s0, 0x14
    local_0 = v0;                                               // 0x001256b0: sw $v0, 0($sp)
    local_10 = v1;                                              // 0x001256b4: sw $v1, 0x10($sp)
    func_00125538();  // 125538                                // 0x001256b8: jal 0x125538
    local_8 = s2;                                               // 0x001256bc: sw $s2, 8($sp)
    if (v0 >= 0) goto label_0x1256d0;                           // 0x001256c0: bgezl $v0, 0x1256d0
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x001256c4: sw $zero, 0x34($s0)
    goto label_0x125730;                                        // 0x001256c8: b 0x125730
label_0x1256d0:
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x001256d0: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x001256d4: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x001256d8: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x001256dc: sw $zero, 0x20($s0)
    *(uint16_t*)((s0) + 0x1c) = 0;                              // 0x001256e0: sh $zero, 0x1c($s0)
    *(uint16_t*)((s0) + 0x26) = 0;                              // 0x001256e4: sh $zero, 0x26($s0)
    *(uint16_t*)((s0) + 0x24) = 0;                              // 0x001256e8: sh $zero, 0x24($s0)
    a1 = *(int32_t*)((s0) + 0x3c);                              // 0x001256ec: lw $a1, 0x3c($s0)
    v1 = *(int8_t*)(s1);                                        // 0x001256f0: lb $v1, 0($s1)
    a2 = *(int32_t*)((s0) + 0x40);                              // 0x001256f4: lw $a2, 0x40($s0)
    *(uint32_t*)((s0) + 0x50) = v1;                             // 0x001256f8: sw $v1, 0x50($s0)
    v1 = 2;                                                     // 0x001256fc: addiu $v1, $zero, 2
    a3 = *(int32_t*)((s0) + 0x44);                              // 0x00125700: lw $a3, 0x44($s0)
    a0 = *(int8_t*)(s3);                                        // 0x00125704: lb $a0, 0($s3)
    v0 = local_20;                                              // 0x00125708: lh $v0, 0x20($sp)
    *(uint32_t*)((s0) + 0x54) = a0;                             // 0x0012570c: sw $a0, 0x54($s0)
    *(uint16_t*)((s0) + 0x98) = v1;                             // 0x00125710: sh $v1, 0x98($s0)
    v1 = *(int32_t*)(s2);                                       // 0x00125714: lw $v1, 0($s2)
    *(uint32_t*)((s0) + 0x5c) = a1;                             // 0x00125718: sw $a1, 0x5c($s0)
    *(uint32_t*)((s0) + 0x60) = a2;                             // 0x0012571c: sw $a2, 0x60($s0)
    *(uint32_t*)((s0) + 0x58) = v1;                             // 0x00125720: sw $v1, 0x58($s0)
    *(uint32_t*)((s0) + 0x64) = a3;                             // 0x00125724: sw $a3, 0x64($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x00125728: sw $zero, 0x8c($s0)
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x0012572c: sw $zero, 0x88($s0)
label_0x125730:
    return;                                                     // 0x00125744: jr $ra
    sp = sp + 0x60;                                             // 0x00125748: addiu $sp, $sp, 0x60
}