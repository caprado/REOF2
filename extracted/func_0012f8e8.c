void func_0012f8e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_2, local_4;
    
    sp = sp + -0x20;                                            // 0x0012f8e8: addiu $sp, $sp, -0x20
    s0 = v1 + 0x2d7;                                            // 0x0012f8f4: addiu $s0, $v1, 0x2d7
    a2 = 1;                                                     // 0x0012f904: addiu $a2, $zero, 1
    v0 = *(int8_t*)((v1) + 0x2d6);                              // 0x0012f90c: lb $v0, 0x2d6($v1)
    if (v0 == a2) goto label_0x12f928;                          // 0x0012f910: beq $v0, $a2, 0x12f928
    v0 = *(int32_t*)((v1) + 0x48);                              // 0x0012f918: lw $v0, 0x48($v1)
    *(uint8_t*)((v1) + 0x2d6) = a2;                             // 0x0012f91c: sb $a2, 0x2d6($v1)
    v0 = v0 + 0x24;                                             // 0x0012f920: addiu $v0, $v0, 0x24
    *(uint32_t*)((v1) + 0x48) = v0;                             // 0x0012f924: sw $v0, 0x48($v1)
label_0x12f928:
    func_00107d30();  // 0x107c70                                // 0x0012f928: jal 0x107c70
    a2 = 0x10;                                                  // 0x0012f92c: addiu $a2, $zero, 0x10
    a2 = 0x10;                                                  // 0x0012f940: addiu $a2, $zero, 0x10
    return func_0010b460();  // Tail call                        // 0x0012f948: j 0x10b2a0
    sp = sp + 0x20;                                             // 0x0012f94c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x0012f950: addiu $sp, $sp, -0x10
    v1 = 1;                                                     // 0x0012f95c: addiu $v1, $zero, 1
    v0 = *(int8_t*)((a3) + 0x2d6);                              // 0x0012f960: lb $v0, 0x2d6($a3)
    if (v0 != v1) goto label_0x12f97c;                          // 0x0012f964: bne $v0, $v1, 0x12f97c
    a0 = a3 + 0x2d7;                                            // 0x0012f968: addiu $a0, $a3, 0x2d7
    v0 = *(int32_t*)((a3) + 0x48);                              // 0x0012f96c: lw $v0, 0x48($a3)
    *(uint8_t*)((a3) + 0x2d6) = 0;                              // 0x0012f970: sb $zero, 0x2d6($a3)
    v0 = v0 + 0x24;                                             // 0x0012f974: addiu $v0, $v0, 0x24
    *(uint32_t*)((a3) + 0x48) = v0;                             // 0x0012f978: sw $v0, 0x48($a3)
label_0x12f97c:
    v0 = -0x80;                                                 // 0x0012f980: addiu $v0, $zero, -0x80
    a2 = 0x10;                                                  // 0x0012f988: addiu $a2, $zero, 0x10
    *(uint16_t*)((a3) + 0x2e8) = 0;                             // 0x0012f98c: sh $zero, 0x2e8($a3)
    *(uint16_t*)((a3) + 0x2ec) = v0;                            // 0x0012f990: sh $v0, 0x2ec($a3)
    *(uint16_t*)((a3) + 0x2ea) = v0;                            // 0x0012f994: sh $v0, 0x2ea($a3)
    return func_00107d30();  // Tail call                        // 0x0012f998: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012f99c: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0012f9a0: addiu $sp, $sp, -0x20
    func_0012f7d8();  // 0x12f7c8                                // 0x0012f9bc: jal 0x12f7c8
    func_0012f7c8();  // 0x12f7b8                                // 0x0012f9c8: jal 0x12f7b8
    func_0012f8e8();  // 0x12f848                                // 0x0012f9d4: jal 0x12f848
    a1 = 0x11c;                                                 // 0x0012f9e4: addiu $a1, $zero, 0x11c
    return func_0012f7c0();  // Tail call                       // 0x0012f9f4: j 0x12f7c0
    sp = sp + 0x20;                                             // 0x0012f9f8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0012f9fc: nop 
    sp = sp + -0x30;                                            // 0x0012fa00: addiu $sp, $sp, -0x30
    func_0010af38();  // 0x10ae00                                // 0x0012fa18: jal 0x10ae00
    a3 = sp + 2;                                                // 0x0012fa2c: addiu $a3, $sp, 2
    func_0012d978();  // 0x12d7c0                                // 0x0012fa30: jal 0x12d7c0
    t0 = sp + 4;                                                // 0x0012fa34: addiu $t0, $sp, 4
    v1 = local_0;                                               // 0x0012fa38: lhu $v1, 0($sp)
    a0 = local_2;                                               // 0x0012fa3c: lhu $a0, 2($sp)
    v0 = local_4;                                               // 0x0012fa40: lhu $v0, 4($sp)
    *(uint16_t*)((s1) + 0x2d0) = v1;                            // 0x0012fa48: sh $v1, 0x2d0($s1)
    *(uint16_t*)((s1) + 0x2d4) = v0;                            // 0x0012fa4c: sh $v0, 0x2d4($s1)
    *(uint16_t*)((s1) + 0x2d2) = a0;                            // 0x0012fa50: sh $a0, 0x2d2($s1)
    return;                                                     // 0x0012fa5c: jr $ra
    sp = sp + 0x30;                                             // 0x0012fa60: addiu $sp, $sp, 0x30
}