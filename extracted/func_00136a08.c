void func_00136a08() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x40;                                            // 0x00136a08: addiu $sp, $sp, -0x40
    if (a0 != 0) goto label_0x136a30;                           // 0x00136a18: bnez $a0, 0x136a30
    a0 = 0x22 << 16;                                            // 0x00136a20: lui $a0, 0x22
    goto label_0x136a6c;                                        // 0x00136a24: b 0x136a6c
    a0 = &str_00224ae0;  // "cvFsDelVolume #2:illegal volume name" // 0x00136a28: addiu $a0, $a0, 0x4ae0
    /* nop */                                                   // 0x00136a2c: nop 
label_0x136a30:
    if (s0 != 0) goto label_0x136a48;                           // 0x00136a30: bnez $s0, 0x136a48
    /* nop */                                                   // 0x00136a34: nop 
    a0 = 0x22 << 16;                                            // 0x00136a38: lui $a0, 0x22
    goto label_0x136a6c;                                        // 0x00136a3c: b 0x136a6c
    a0 = &str_00224b08;  // "cvFsDelVolume #3:device not found" // 0x00136a40: addiu $a0, $a0, 0x4b08
    /* nop */                                                   // 0x00136a44: nop 
label_0x136a48:
    func_00135220();  // 135220                                // 0x00136a48: jal 0x135220
    /* nop */                                                   // 0x00136a4c: nop 
    if (s1 != 0) goto label_0x136a80;                           // 0x00136a5c: bnez $s1, 0x136a80
    a2 = 0x14;                                                  // 0x00136a60: addiu $a2, $zero, 0x14
    a0 = 0x22 << 16;                                            // 0x00136a64: lui $a0, 0x22
    a0 = &str_00224b30;  // "cvFsGetVolumeInfo #1:illegal device name" // 0x00136a68: addiu $a0, $a0, 0x4b30
label_0x136a6c:
    func_00134ec0();  // 134ec0                                // 0x00136a6c: jal 0x134ec0
    /* nop */                                                   // 0x00136a70: nop 
    goto label_0x136ab0;                                        // 0x00136a74: b 0x136ab0
    v0 = -1;                                                    // 0x00136a78: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00136a7c: nop 
label_0x136a80:
    func_00107c70();  // 107c70                                // 0x00136a80: jal 0x107c70
    /* nop */                                                   // 0x00136a84: nop 
    v0 = -1;                                                    // 0x00136a88: addiu $v0, $zero, -1
    local_4 = s0;                                               // 0x00136a8c: sw $s0, 4($sp)
    a1 = 3;                                                     // 0x00136a94: addiu $a1, $zero, 3
    v1 = *(int32_t*)((s1) + 0x60);                              // 0x00136a9c: lw $v1, 0x60($s1)
    if (v1 == 0) goto label_0x136ab0;                           // 0x00136aa0: beqz $v1, 0x136ab0
    /* call function at address in v1 */                        // 0x00136aa8: jalr $v1
    /* nop */                                                   // 0x00136aac: nop 
label_0x136ab0:
    return;                                                     // 0x00136abc: jr $ra
    sp = sp + 0x40;                                             // 0x00136ac0: addiu $sp, $sp, 0x40
}