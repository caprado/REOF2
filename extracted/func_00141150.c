void func_00141150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x40;                                            // 0x00141150: addiu $sp, $sp, -0x40
    v0 = 0x21 << 16;                                            // 0x00141154: lui $v0, 0x21
    s0 = v0 + 0x90;                                             // 0x0014115c: addiu $s0, $v0, 0x90
    v0 = g_00210090;  // Global at 0x00210090                   // 0x0014117c: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1411b4;                           // 0x00141180: beqz $v0, 0x1411b4
label_0x141190:
    a0 = a0 + 1;                                                // 0x00141190: addiu $a0, $a0, 1
    a1 = a1 + 0x14;                                             // 0x00141194: addiu $a1, $a1, 0x14
    v0 = (a0 < 0x20) ? 1 : 0;                                   // 0x00141198: slti $v0, $a0, 0x20
    if (v0 == 0) goto label_0x1411b4;                           // 0x0014119c: beqz $v0, 0x1411b4
    v1 = v1 + 0x14;                                             // 0x001411a0: addiu $v1, $v1, 0x14
    v0 = *(int8_t*)(a1);                                        // 0x001411a4: lb $v0, 0($a1)
    /* nop */                                                   // 0x001411a8: nop 
    if (v0 != 0) goto label_0x141190;                           // 0x001411ac: bnez $v0, 0x141190
label_0x1411b4:
    v1 = 0x20;                                                  // 0x001411b4: addiu $v1, $zero, 0x20
    if (a0 == v1) goto label_0x14122c;                          // 0x001411b8: beq $a0, $v1, 0x14122c
    func_00107c70();  // 107c70                                // 0x001411c8: jal 0x107c70
    a2 = 0x14;                                                  // 0x001411cc: addiu $a2, $zero, 0x14
    g_00210094 = s3;  // Global at 0x00210094                   // 0x001411d0: sw $s3, 4($s0)
    g_0021009c = s1;  // Global at 0x0021009c                   // 0x001411d4: sw $s1, 0xc($s0)
    g_00210098 = s2;  // Global at 0x00210098                   // 0x001411dc: sw $s2, 8($s0)
    a2 = 4;                                                     // 0x001411e4: addiu $a2, $zero, 4
    t0 = 1;                                                     // 0x001411ec: addiu $t0, $zero, 1
    local_0 = s3;                                               // 0x001411f0: sw $s3, 0($sp)
    local_4 = s2;                                               // 0x001411f4: sw $s2, 4($sp)
    local_8 = s1;                                               // 0x001411f8: sw $s1, 8($sp)
    func_00139120();  // 139120                                // 0x001411fc: jal 0x139120
    local_c = s0;                                               // 0x00141200: sw $s0, 0xc($sp)
    if (v0 != 0) goto label_0x141220;                           // 0x00141204: bnez $v0, 0x141220
    g_002100a0 = v0;  // Global at 0x002100a0                   // 0x00141208: sw $v0, 0x10($s0)
    a0 = 0x22 << 16;                                            // 0x0014120c: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00141210: jal 0x116508
    a0 = &str_002263d0;  // "\nSVM/PS2EE Ver.1.51 Build:Jul 28 2003 17:49:49\n" // 0x00141214: addiu $a0, $a0, 0x63d0
    goto label_0x14122c;                                        // 0x00141218: b 0x14122c
label_0x141220:
    v1 = 1;                                                     // 0x00141220: addiu $v1, $zero, 1
    g_00210090 = v1;  // Global at 0x00210090                   // 0x00141228: sb $v1, 0($s0)
label_0x14122c:
    return;                                                     // 0x00141240: jr $ra
    sp = sp + 0x40;                                             // 0x00141244: addiu $sp, $sp, 0x40
}