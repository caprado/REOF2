void func_001232a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_8;
    
    sp = sp + -0x60;                                            // 0x001232a8: addiu $sp, $sp, -0x60
    s5 = 1;                                                     // 0x001232b8: addiu $s5, $zero, 1
    s1 = s0 + 0xe;                                              // 0x001232c0: addiu $s1, $s0, 0xe
    s2 = s0 + 0xf;                                              // 0x001232c8: addiu $s2, $s0, 0xf
    s3 = s0 + 0x10;                                             // 0x001232d0: addiu $s3, $s0, 0x10
    s4 = s0 + 0xd;                                              // 0x001232d8: addiu $s4, $s0, 0xd
    *(uint16_t*)((s0) + 2) = s5;                                // 0x001232e4: sh $s5, 2($s0)
    v0 = s0 + 0x18;                                             // 0x001232e8: addiu $v0, $s0, 0x18
    a2 = sp + 0x10;                                             // 0x001232f0: addiu $a2, $sp, 0x10
    a3 = s0 + 0xc;                                              // 0x001232f4: addiu $a3, $s0, 0xc
    t3 = s0 + 0x14;                                             // 0x00123304: addiu $t3, $s0, 0x14
    local_0 = v0;                                               // 0x00123308: sw $v0, 0($sp)
    func_001232a8();  // 0x123198                                // 0x0012330c: jal 0x123198
    local_8 = s3;                                               // 0x00123310: sw $s3, 8($sp)
    if (v0 >= 0) goto label_0x123328;                           // 0x00123314: bgez $v0, 0x123328
    a3 = 8;                                                     // 0x00123318: addiu $a3, $zero, 8
    goto label_0x12339c;                                        // 0x0012331c: b 0x12339c
    /* nop */                                                   // 0x00123324: nop 
label_0x123328:
    *(uint32_t*)((s0) + 0x34) = 0;                              // 0x00123328: sw $zero, 0x34($s0)
    *(uint32_t*)((s0) + 0x30) = 0;                              // 0x0012332c: sw $zero, 0x30($s0)
    *(uint32_t*)((s0) + 0x2c) = 0;                              // 0x00123330: sw $zero, 0x2c($s0)
    *(uint32_t*)((s0) + 0x28) = 0;                              // 0x00123334: sw $zero, 0x28($s0)
    *(uint32_t*)((s0) + 0x20) = 0;                              // 0x00123338: sw $zero, 0x20($s0)
    *(uint16_t*)((s0) + 0x1c) = 0;                              // 0x0012333c: sh $zero, 0x1c($s0)
    *(uint16_t*)((s0) + 0x26) = 0;                              // 0x00123340: sh $zero, 0x26($s0)
    *(uint16_t*)((s0) + 0x24) = 0;                              // 0x00123344: sh $zero, 0x24($s0)
    a0 = *(int32_t*)((s0) + 0x3c);                              // 0x00123348: lw $a0, 0x3c($s0)
    v0 = *(int8_t*)(s1);                                        // 0x0012334c: lb $v0, 0($s1)
    a1 = *(int32_t*)((s0) + 0x40);                              // 0x00123350: lw $a1, 0x40($s0)
    *(uint32_t*)((s0) + 0x50) = v0;                             // 0x00123354: sw $v0, 0x50($s0)
    v0 = 3;                                                     // 0x00123358: addiu $v0, $zero, 3
    a2 = *(int32_t*)((s0) + 0x44);                              // 0x0012335c: lw $a2, 0x44($s0)
    v1 = *(int8_t*)(s2);                                        // 0x00123360: lb $v1, 0($s2)
    *(uint32_t*)((s0) + 0x5c) = a0;                             // 0x00123364: sw $a0, 0x5c($s0)
    *(uint32_t*)((s0) + 0x54) = v1;                             // 0x00123368: sw $v1, 0x54($s0)
    *(uint16_t*)((s0) + 0x98) = v0;                             // 0x0012336c: sh $v0, 0x98($s0)
    v1 = *(int32_t*)(s3);                                       // 0x00123370: lw $v1, 0($s3)
    *(uint32_t*)((s0) + 0x60) = a1;                             // 0x00123374: sw $a1, 0x60($s0)
    *(uint32_t*)((s0) + 0x58) = v1;                             // 0x00123378: sw $v1, 0x58($s0)
    *(uint32_t*)((s0) + 0x64) = a2;                             // 0x0012337c: sw $a2, 0x64($s0)
    *(uint32_t*)((s0) + 0x8c) = 0;                              // 0x00123380: sw $zero, 0x8c($s0)
    *(uint32_t*)((s0) + 0x88) = 0;                              // 0x00123384: sw $zero, 0x88($s0)
    v0 = *(int8_t*)(s4);                                        // 0x00123388: lb $v0, 0($s4)
    if (v0 != a3) goto label_0x123398;                          // 0x0012338c: bnel $v0, $a3, 0x123398
    *(uint16_t*)((s0) + 0x9a) = 0;                              // 0x00123390: sh $zero, 0x9a($s0)
    *(uint16_t*)((s0) + 0x9a) = s5;                             // 0x00123394: sh $s5, 0x9a($s0)
label_0x123398:
    v0 = local_10;                                              // 0x00123398: lh $v0, 0x10($sp)
label_0x12339c:
    return;                                                     // 0x001233b8: jr $ra
    sp = sp + 0x60;                                             // 0x001233bc: addiu $sp, $sp, 0x60
}