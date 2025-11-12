void func_00164c88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00164c88: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((a0) + 0x1b74);                            // 0x00164c90: lw $v0, 0x1b74($a0)
    a0 = func_00164c00;  // Global at 0x001649a0                 // 0x00164c98: lw $a0, 0($v0)
    return func_001330e8();  // Tail call                        // 0x00164c9c: j 0x132f40
    sp = sp + 0x10;                                             // 0x00164ca0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00164ca4: nop 
    sp = sp + -0x40;                                            // 0x00164ca8: addiu $sp, $sp, -0x40
    v0 = (s2 < 0x120) ? 1 : 0;                                  // 0x00164cd0: slti $v0, $s2, 0x120
    *(uint32_t*)(s3) = 0;                                       // 0x00164cdc: sw $zero, 0($s3)
    if (v0 != 0) goto label_0x164d3c;                           // 0x00164ce8: bnez $v0, 0x164d3c
    s4 = *(int32_t*)((s0) + 0x1b74);                            // 0x00164cec: lw $s4, 0x1b74($s0)
    func_00132f00();  // 0x132e68                                // 0x00164cf0: jal 0x132e68
    /* nop */                                                   // 0x00164cf4: nop 
    if (v0 != 0) goto label_0x164d2c;                           // 0x00164cf8: bnez $v0, 0x164d2c
    v1 = local_0;                                               // 0x00164cfc: lw $v1, 0($sp)
    func_00169678();  // 0x169640                                // 0x00164d00: jal 0x169640
    v0 = (v0 < 0x6c) ? 1 : 0;                                   // 0x00164d0c: slti $v0, $v0, 0x6c
    if (v0 == 0) goto label_0x164d2c;                           // 0x00164d18: beqz $v0, 0x164d2c
    func_00164e80();  // 0x164d60                                // 0x00164d20: jal 0x164d60
    /* nop */                                                   // 0x00164d24: nop 
    v1 = v0 - s1;                                               // 0x00164d28: subu $v1, $v0, $s1
label_0x164d2c:
    v0 = 0x16 << 16;                                            // 0x00164d2c: lui $v0, 0x16
    *(uint32_t*)(s3) = v1;                                      // 0x00164d30: sw $v1, 0($s3)
    v0 = v0 + 0x49a0;                                           // 0x00164d34: addiu $v0, $v0, 0x49a0
    *(uint32_t*)((s4) + 0x3c) = v0;                             // 0x00164d38: sw $v0, 0x3c($s4)
label_0x164d3c:
    return;                                                     // 0x00164d54: jr $ra
    sp = sp + 0x40;                                             // 0x00164d58: addiu $sp, $sp, 0x40
}