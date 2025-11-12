void func_00137300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00137300: addiu $sp, $sp, -0x10
    func_00137fb0();  // 0x137ec8                                // 0x00137308: jal 0x137ec8
    a0 = 0x1300;                                                // 0x0013730c: addiu $a0, $zero, 0x1300
    func_00100e38();  // 0x100d98                                // 0x00137310: jal 0x100d98
    a0 = 0x1301;                                                // 0x00137318: addiu $a0, $zero, 0x1301
    return func_00137fb0();  // Tail call                        // 0x00137320: j 0x137ec8
    sp = sp + 0x10;                                             // 0x00137324: addiu $sp, $sp, 0x10
    sp = sp + -0x50;                                            // 0x00137328: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x0013732c: addiu $v0, $zero, 1
    local_0 = v0;                                               // 0x00137338: sw $v0, 0($sp)
    s3 = 0 | 0x9000;                                            // 0x00137350: ori $s3, $zero, 0x9000
    s4 = 1;                                                     // 0x00137358: addiu $s4, $zero, 1
    s5 = 0x22 << 16;                                            // 0x00137360: lui $s5, 0x22
    s6 = 9;                                                     // 0x00137368: addiu $s6, $zero, 9
    v0 = local_0;                                               // 0x0013736c: lw $v0, 0($sp)
    if (v0 != s4) goto label_0x1373d0;                          // 0x00137370: bne $v0, $s4, 0x1373d0
    func_00137fb0();  // 0x137ec8                                // 0x00137378: jal 0x137ec8
    a0 = 0x1100;                                                // 0x0013737c: addiu $a0, $zero, 0x1100
    a0 = *(int32_t*)((s1) + 0x30);                              // 0x00137380: lw $a0, 0x30($s1)
    a1 = 1;                                                     // 0x00137384: addiu $a1, $zero, 1
    func_001381d8();  // 0x138160                                // 0x00137388: jal 0x138160
    a0 = 0x1101;                                                // 0x00137390: addiu $a0, $zero, 0x1101
    func_00137fb0();  // 0x137ec8                                // 0x00137394: jal 0x137ec8
    if (s0 >= 0) goto label_0x1373b0;                           // 0x0013739c: bgez $s0, 0x1373b0
    /* nop */                                                   // 0x001373a0: nop 
    *(uint32_t*)((s1) + 0x34) = s0;                             // 0x001373a4: sw $s0, 0x34($s1)
    goto label_0x1373cc;                                        // 0x001373a8: b 0x1373cc
    *(uint8_t*)((s1) + 2) = s6;                                 // 0x001373ac: sb $s6, 2($s1)
label_0x1373b0:
    func_00137300();  // 0x1372d0                                // 0x001373b0: jal 0x1372d0
    s2 = s2 + 1;                                                // 0x001373b4: addiu $s2, $s2, 1
    v0 = (s3 < s2) ? 1 : 0;                                     // 0x001373b8: slt $v0, $s3, $s2
    /* beqzl $v0, 0x137370 */                                   // 0x001373bc: beqzl $v0, 0x137370
    v0 = local_0;                                               // 0x001373c0: lw $v0, 0($sp)
    func_00116598();  // 0x116508                                // 0x001373c4: jal 0x116508
    a0 = &str_00224d48;  // "SRD: SRD_Break handle is NULL\r\n" // 0x001373c8: addiu $a0, $s5, 0x4d48
label_0x1373cc:
label_0x1373d0:
    return;                                                     // 0x001373ec: jr $ra
    sp = sp + 0x50;                                             // 0x001373f0: addiu $sp, $sp, 0x50
}