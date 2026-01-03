void func_00136ac8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x00136ac8: addiu $sp, $sp, -0x40
    if (a0 != 0) goto label_0x136af8;                           // 0x00136ae0: bnez $a0, 0x136af8
    a0 = 0x22 << 16;                                            // 0x00136ae8: lui $a0, 0x22
    goto label_0x136b34;                                        // 0x00136aec: b 0x136b34
    a0 = &str_00224b58;  // "cvFsGetVolumeInfo #2:illegal volume name" // 0x00136af0: addiu $a0, $a0, 0x4b58
    /* nop */                                                   // 0x00136af4: nop 
label_0x136af8:
    if (s0 != 0) goto label_0x136b10;                           // 0x00136af8: bnez $s0, 0x136b10
    /* nop */                                                   // 0x00136afc: nop 
    a0 = 0x22 << 16;                                            // 0x00136b00: lui $a0, 0x22
    goto label_0x136b34;                                        // 0x00136b04: b 0x136b34
    a0 = &str_00224b88;  // "cvFsGetVolumeInfo #3:device not found" // 0x00136b08: addiu $a0, $a0, 0x4b88
    /* nop */                                                   // 0x00136b0c: nop 
label_0x136b10:
    func_00135220();  // 135220                                // 0x00136b10: jal 0x135220
    /* nop */                                                   // 0x00136b14: nop 
    if (s1 != 0) goto label_0x136b48;                           // 0x00136b24: bnez $s1, 0x136b48
    a2 = 0x14;                                                  // 0x00136b28: addiu $a2, $zero, 0x14
    a0 = 0x22 << 16;                                            // 0x00136b2c: lui $a0, 0x22
    a0 = &str_00224bb8;  // "cvFsSetDefVol #1:illegal device name" // 0x00136b30: addiu $a0, $a0, 0x4bb8
label_0x136b34:
    func_00134ec0();  // 134ec0                                // 0x00136b34: jal 0x134ec0
    /* nop */                                                   // 0x00136b38: nop 
    goto label_0x136b7c;                                        // 0x00136b3c: b 0x136b7c
    v0 = -1;                                                    // 0x00136b40: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00136b44: nop 
label_0x136b48:
    func_00107c70();  // 107c70                                // 0x00136b48: jal 0x107c70
    /* nop */                                                   // 0x00136b4c: nop 
    v0 = -1;                                                    // 0x00136b50: addiu $v0, $zero, -1
    local_4 = s0;                                               // 0x00136b54: sw $s0, 4($sp)
    local_8 = s2;                                               // 0x00136b5c: sw $s2, 8($sp)
    a1 = 5;                                                     // 0x00136b60: addiu $a1, $zero, 5
    v1 = *(int32_t*)((s1) + 0x60);                              // 0x00136b68: lw $v1, 0x60($s1)
    if (v1 == 0) goto label_0x136b7c;                           // 0x00136b6c: beqz $v1, 0x136b7c
    /* call function at address in v1 */                        // 0x00136b74: jalr $v1
    /* nop */                                                   // 0x00136b78: nop 
label_0x136b7c:
    return;                                                     // 0x00136b8c: jr $ra
    sp = sp + 0x40;                                             // 0x00136b90: addiu $sp, $sp, 0x40
}