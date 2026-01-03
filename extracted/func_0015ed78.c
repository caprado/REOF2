void func_0015ed78() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015ed78: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015ed8c: jal 0x15fc80
    a0 = 0x22 << 16;                                            // 0x0015ed94: lui $a0, 0x22
    if (v0 != 0) goto label_0x15edb8;                           // 0x0015ed98: bnez $v0, 0x15edb8
    a0 = &str_00227940;  // "E10915C: mwPlyStartFname: fname is NULL." // 0x0015ed9c: addiu $a0, $a0, 0x7940
    return func_001634a8();  // Tail call                        // 0x0015edac: j 0x163410
    sp = sp + 0x20;                                             // 0x0015edb0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015edb4: nop 
label_0x15edb8:
    if (s0 != 0) goto label_0x15ede0;                           // 0x0015edb8: bnez $s0, 0x15ede0
    a0 = 0x22 << 16;                                            // 0x0015edc0: lui $a0, 0x22
    a0 = &str_00227970;  // "E1122610 mwSfdStartMem: handle is invalid." // 0x0015edcc: addiu $a0, $a0, 0x7970
    return func_001634a8();  // Tail call                        // 0x0015edd4: j 0x163410
    sp = sp + 0x20;                                             // 0x0015edd8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015eddc: nop 
label_0x15ede0:
    a3 = -1;                                                    // 0x0015edf4: addiu $a3, $zero, -1
    goto label_0x15ee00;                                        // 0x0015edf8: j 0x15ee00
    sp = sp + 0x20;                                             // 0x0015edfc: addiu $sp, $sp, 0x20
label_0x15ee00:
    sp = sp + -0x30;                                            // 0x0015ee00: addiu $sp, $sp, -0x30
    v0 = *(int32_t*)((s0) + 0x12c);                             // 0x0015ee28: lw $v0, 0x12c($s0)
    func_0015efb0();  // 15efb0                                // 0x0015ee2c: jal 0x15efb0
    *(uint32_t*)((s0) + 0x128) = v0;                            // 0x0015ee30: sw $v0, 0x128($s0)
    func_0015ec78();  // 15ec78                                // 0x0015ee34: jal 0x15ec78
    func_0015f398();  // 15f398                                // 0x0015ee40: jal 0x15f398
    func_0015f768();  // 15f768                                // 0x0015ee50: jal 0x15f768
    return func_0015f770();  // Tail call                       // 0x0015ee78: j 0x15f770
    sp = sp + 0x30;                                             // 0x0015ee7c: addiu $sp, $sp, 0x30
    sp = sp + -0x20;                                            // 0x0015ee80: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015ee9c: jal 0x15fc80
    if (v0 != 0) goto label_0x15eed0;                           // 0x0015eea4: bnez $v0, 0x15eed0
    a0 = 0x22 << 16;                                            // 0x0015eeac: lui $a0, 0x22
    a0 = &str_002279a0;  // "E1122609 mwSfdStartSj: handle is invalid." // 0x0015eeb8: addiu $a0, $a0, 0x79a0
    return func_001634a8();  // Tail call                        // 0x0015eec4: j 0x163410
    sp = sp + 0x20;                                             // 0x0015eec8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015eecc: nop 
label_0x15eed0:
    func_0015efb0();  // 15efb0                                // 0x0015eed0: jal 0x15efb0
    /* nop */                                                   // 0x0015eed4: nop 
    a0 = *(int32_t*)((s0) + 0x14c);                             // 0x0015eed8: lw $a0, 0x14c($s0)
    v1 = str_002279a0;  // "E1122609 mwSfdStartSj: handle is invalid." // 0x0015eedc: lw $v1, 0($a0)
    v0 = *(int32_t*)((v1) + 0xc);                               // 0x0015eee0: lw $v0, 0xc($v1)
    /* call function at address in v0 */                        // 0x0015eee4: jalr $v0
    /* nop */                                                   // 0x0015eee8: nop 
    func_0013f020();  // 13f020                                // 0x0015eef0: jal 0x13f020
    *(uint32_t*)((s0) + 0x150) = s1;                            // 0x0015eef8: sw $s1, 0x150($s0)
    *(uint32_t*)((s0) + 0x128) = v0;                            // 0x0015eefc: sw $v0, 0x128($s0)
    *(uint32_t*)((s0) + 0x154) = s2;                            // 0x0015ef04: sw $s2, 0x154($s0)
    func_0015ec78();  // 15ec78                                // 0x0015ef08: jal 0x15ec78
    *(uint32_t*)((s0) + 0x14c) = v0;                            // 0x0015ef0c: sw $v0, 0x14c($s0)
    return func_0015bd38();  // Tail call                        // 0x0015ef24: j 0x15bc68
    sp = sp + 0x20;                                             // 0x0015ef28: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015ef2c: nop 
    sp = sp + -0x20;                                            // 0x0015ef30: addiu $sp, $sp, -0x20
    func_0015fc80();  // 15fc80                                // 0x0015ef44: jal 0x15fc80
    if (v0 != 0) goto label_0x15ef70;                           // 0x0015ef4c: bnez $v0, 0x15ef70
    a0 = 0x22 << 16;                                            // 0x0015ef54: lui $a0, 0x22
    a0 = &str_002279d0;  // "E2003 mwSfdStop:can't stop SFD"    // 0x0015ef60: addiu $a0, $a0, 0x79d0
    return func_001634a8();  // Tail call                        // 0x0015ef68: j 0x163410
    sp = sp + 0x20;                                             // 0x0015ef6c: addiu $sp, $sp, 0x20
label_0x15ef70:
    func_0015efb0();  // 15efb0                                // 0x0015ef70: jal 0x15efb0
    /* nop */                                                   // 0x0015ef74: nop 
    v0 = 2;                                                     // 0x0015ef78: addiu $v0, $zero, 2
    *(uint32_t*)((s0) + 0x128) = s1;                            // 0x0015ef7c: sw $s1, 0x128($s0)
    *(uint32_t*)((s0) + 0x13c) = v0;                            // 0x0015ef84: sw $v0, 0x13c($s0)
    *(uint32_t*)((s0) + 0x140) = 0;                             // 0x0015ef88: sw $zero, 0x140($s0)
    *(uint32_t*)((s0) + 0x144) = 0;                             // 0x0015ef8c: sw $zero, 0x144($s0)
    func_0015ec78();  // 15ec78                                // 0x0015ef90: jal 0x15ec78
    *(uint32_t*)((s0) + 0x148) = 0;                             // 0x0015ef94: sw $zero, 0x148($s0)
    return func_0015bd38();  // Tail call                        // 0x0015efa8: j 0x15bc68
    sp = sp + 0x20;                                             // 0x0015efac: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x0015efb0: addiu $sp, $sp, -0x20
    s1 = *(int32_t*)((s0) + 0x40);                              // 0x0015efc4: lw $s1, 0x40($s0)
    /* beqzl $s1, 0x15f034 */                                   // 0x0015efc8: beqzl $s1, 0x15f034
    func_00164070();  // 164070                                // 0x0015efd0: jal 0x164070
    /* nop */                                                   // 0x0015efd4: nop 
    *(uint32_t*)((s0) + 8) = 0;                                 // 0x0015efd8: sw $zero, 8($s0)
    func_001737e8();  // 1737e8                                // 0x0015efdc: jal 0x1737e8
    if (v0 == 0) goto label_0x15f000;                           // 0x0015efe4: beqz $v0, 0x15f000
    a0 = -0x134;                                                // 0x0015efe8: addiu $a0, $zero, -0x134
    func_0015e7b0();  // 15e7b0                                // 0x0015efec: jal 0x15e7b0
    /* nop */                                                   // 0x0015eff0: nop 
    a0 = 0x22 << 16;                                            // 0x0015eff4: lui $a0, 0x22
    func_00163410();  // 163410                                // 0x0015eff8: jal 0x163410
    a0 = &str_00227a00;  // "E1122602 mwSfdStop: handle is invalid." // 0x0015effc: addiu $a0, $a0, 0x7a00
label_0x15f000:
    func_00162c08();  // 162c08                                // 0x0015f000: jal 0x162c08
    a0 = s0 + 0x1ec;                                            // 0x0015f004: addiu $a0, $s0, 0x1ec
    *(uint32_t*)((s0) + 0x20c) = 0;                             // 0x0015f008: sw $zero, 0x20c($s0)
    v0 = *(int32_t*)((s0) + 0x44);                              // 0x0015f00c: lw $v0, 0x44($s0)
    if (v0 == 0) goto label_0x15f030;                           // 0x0015f010: beqz $v0, 0x15f030
    return func_00164398();  // Tail call                       // 0x0015f024: j 0x164398
    sp = sp + 0x20;                                             // 0x0015f028: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015f02c: nop 
label_0x15f030:
    return;                                                     // 0x0015f03c: jr $ra
    sp = sp + 0x20;                                             // 0x0015f040: addiu $sp, $sp, 0x20
}