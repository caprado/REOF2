void func_00161938() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_4;
    
    sp = sp + -0x30;                                            // 0x00161938: addiu $sp, $sp, -0x30
    v1 = v0 + 0x100;                                            // 0x00161944: addiu $v1, $v0, 0x100
    t0 = *(int32_t*)((v1) + 4);                                 // 0x00161950: lw $t0, 4($v1)
    if (t0 != 0) goto label_0x161978;                           // 0x00161954: bnez $t0, 0x161978
    s0 = *(int32_t*)((v0) + 0xa8);                              // 0x00161958: lw $s0, 0xa8($v0)
    func_0017cfb8();  // 17cfb8                                // 0x00161964: jal 0x17cfb8
    goto label_0x1619d4;                                        // 0x0016196c: b 0x1619d4
    /* nop */                                                   // 0x00161974: nop 
label_0x161978:
    v0 = *(int32_t*)((v1) + 8);                                 // 0x00161978: lw $v0, 8($v1)
    a1 = 0x23 << 16;                                            // 0x0016197c: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x00161980: lui $a2, 0x23
    a1 = &str_00228778;  // "SFXINFE"                           // 0x00161984: addiu $a1, $a1, -0x7888
    a2 = &str_00228780;  // "E202283: MWSFD_MakeTblZ16: handle is invalid." // 0x00161988: addiu $a2, $a2, -0x7880
    a3 = sp + 0x10;                                             // 0x0016198c: addiu $a3, $sp, 0x10
    local_0 = t0;                                               // 0x00161990: sw $t0, 0($sp)
    func_001406e0();  // 1406e0                                // 0x00161994: jal 0x1406e0
    local_4 = v0;                                               // 0x00161998: sw $v0, 4($sp)
    if (v0 != 0) goto label_0x1619c0;                           // 0x001619a4: bnez $v0, 0x1619c0
    func_0017cfb8();  // 17cfb8                                // 0x001619ac: jal 0x17cfb8
    /* nop */                                                   // 0x001619b0: nop 
    goto label_0x1619d4;                                        // 0x001619b4: b 0x1619d4
    /* nop */                                                   // 0x001619bc: nop 
label_0x1619c0:
    a1 = local_10;                                              // 0x001619c0: lw $a1, 0x10($sp)
    func_0017cfb8();  // 17cfb8                                // 0x001619c8: jal 0x17cfb8
    a2 = local_14;                                              // 0x001619cc: lw $a2, 0x14($sp)
label_0x1619d4:
    return;                                                     // 0x001619d8: jr $ra
    sp = sp + 0x30;                                             // 0x001619dc: addiu $sp, $sp, 0x30
}