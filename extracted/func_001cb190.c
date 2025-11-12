void func_001cb190() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_18;
    
    sp = sp + -0x30;                                            // 0x001cb190: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001cb194: lui $at, 0x31
    v0 = g_00316cc8;  // Global at 0x00316cc8                   // 0x001cb19c: lw $v0, 0x6cc8($at)
    if (v0 != 0) goto label_0x1cb1d0;                           // 0x001cb1a0: bnez $v0, 0x1cb1d0
    a0 = sp + 0x10;                                             // 0x001cb1a4: addiu $a0, $sp, 0x10
    func_00107d30();  // 0x107c70                                // 0x001cb1ac: jal 0x107c70
    a2 = 0x18;                                                  // 0x001cb1b0: addiu $a2, $zero, 0x18
    v0 = 1;                                                     // 0x001cb1b4: addiu $v0, $zero, 1
    a0 = sp + 0x10;                                             // 0x001cb1b8: addiu $a0, $sp, 0x10
    local_18 = v0;                                              // 0x001cb1bc: sw $v0, 0x18($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001cb1c0: jal 0x1142e0
    local_14 = v0;                                              // 0x001cb1c4: sw $v0, 0x14($sp)
    at = 0x31 << 16;                                            // 0x001cb1c8: lui $at, 0x31
    g_00316cc8 = v0;  // Global at 0x00316cc8                   // 0x001cb1cc: sw $v0, 0x6cc8($at)
label_0x1cb1d0:
    at = 0x31 << 16;                                            // 0x001cb1d0: lui $at, 0x31
    v0 = g_00316cc0;  // Global at 0x00316cc0                   // 0x001cb1d4: lw $v0, 0x6cc0($at)
    if (v0 != 0) goto label_0x1cb208;                           // 0x001cb1d8: bnez $v0, 0x1cb208
    a0 = sp + 0x10;                                             // 0x001cb1dc: addiu $a0, $sp, 0x10
    func_00107d30();  // 0x107c70                                // 0x001cb1e4: jal 0x107c70
    a2 = 0x18;                                                  // 0x001cb1e8: addiu $a2, $zero, 0x18
    v0 = 1;                                                     // 0x001cb1ec: addiu $v0, $zero, 1
    a0 = sp + 0x10;                                             // 0x001cb1f0: addiu $a0, $sp, 0x10
    local_14 = v0;                                              // 0x001cb1f4: sw $v0, 0x14($sp)
    DeleteSema();  // 0x1142e0                                  // 0x001cb1f8: jal 0x1142e0
    local_18 = 0;                                               // 0x001cb1fc: sw $zero, 0x18($sp)
    at = 0x31 << 16;                                            // 0x001cb200: lui $at, 0x31
    g_00316cc0 = v0;  // Global at 0x00316cc0                   // 0x001cb204: sw $v0, 0x6cc0($at)
label_0x1cb208:
    a0 = 0x31 << 16;                                            // 0x001cb208: lui $a0, 0x31
    a0 = a0 + 0x76a0;                                           // 0x001cb20c: addiu $a0, $a0, 0x76a0
    a1 = 0xff;                                                  // 0x001cb210: addiu $a1, $zero, 0xff
    func_00107d30();  // 0x107c70                                // 0x001cb214: jal 0x107c70
    a2 = 0xc;                                                   // 0x001cb218: addiu $a2, $zero, 0xc
    a0 = 0x31 << 16;                                            // 0x001cb21c: lui $a0, 0x31
    a1 = 0xff;                                                  // 0x001cb220: addiu $a1, $zero, 0xff
    a0 = a0 + 0x7680;                                           // 0x001cb224: addiu $a0, $a0, 0x7680
    func_00107d30();  // 0x107c70                                // 0x001cb228: jal 0x107c70
    a2 = 0xc;                                                   // 0x001cb22c: addiu $a2, $zero, 0xc
    at = 0x31 << 16;                                            // 0x001cb230: lui $at, 0x31
    g_00317698 = 0;  // Global at 0x00317698                    // 0x001cb234: sw $zero, 0x7698($at)
    at = 0x31 << 16;                                            // 0x001cb238: lui $at, 0x31
    g_00317690 = 0;  // Global at 0x00317690                    // 0x001cb23c: sw $zero, 0x7690($at)
    return;                                                     // 0x001cb244: jr $ra
    sp = sp + 0x30;                                             // 0x001cb248: addiu $sp, $sp, 0x30
}